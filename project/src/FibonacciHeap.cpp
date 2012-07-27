/***************************************************************************
                          FibonacciHeap.cpp  -  Implementation of Fibonacci
						  Heap data structure (utilized pseudocode from CLR).
                             -------------------
    begin                : 2005 Jul 30
    copyright            : (C) 2005 by Daniel Weller
    email                : dweller@andrew.cmu.edu
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef FIBONACCIHEAP_CPP
#define FIBONACCIHEAP_CPP

#include "FibonacciHeap.h"

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data>::FibonacciHeapNode(const Qt::Key & key, const Data & data, FibonacciHeapNode<Qt::Key, Data> * pParent, FibonacciHeapNode<Qt::Key, Data> * pLeft, FibonacciHeapNode<Qt::Key, Data> * pRight, FibonacciHeapNode<Qt::Key, Data> * pFrontChild, FibonacciHeapNode<Qt::Key, Data> * pBackChild, const size_t iDegree, const bool bMarked)
: m_Data(data), m_Key(key), m_pParent(pParent), m_pLeft(pLeft), m_pRight(pRight), m_pFrontChild(pFrontChild), m_pBackChild(pBackChild), m_iDegree(iDegree), m_bMarked(bMarked) {
	if (m_pLeft != NULL) m_pLeft->m_pRight = this;
	if (m_pRight != NULL) m_pRight->m_pLeft = this;
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data>::~FibonacciHeapNode()
{
	FibonacciHeapNode<Qt::Key, Data> * pTraverse = m_pFrontChild, * pTemp;
	if (pTraverse == NULL) return;
	while (true) {
		pTemp = pTraverse;
		if (pTraverse == m_pBackChild) {
			delete pTemp;
			return;
		} else {
			pTraverse = pTraverse->m_pRight;
			delete pTemp;
		}
	}
}

template<class Qt::Key, class Data>
void FibonacciHeapNode<Qt::Key, Data>::InsertChild(FibonacciHeapNode<Qt::Key, Data> * node)
{
	if (m_iDegree == 0) // empty
		m_pFrontChild = m_pBackChild = node->m_pLeft = node->m_pRight = node;
	else {
		node->m_pLeft = m_pBackChild;
		m_pBackChild->m_pRight = node;
		node->m_pRight = m_pFrontChild;
		m_pBackChild = m_pFrontChild->m_pLeft = node;
	}
	node->m_pParent = this;
	m_iDegree++;
}

template<class Qt::Key, class Data>
void FibonacciHeapNode<Qt::Key, Data>::RemoveChild(FibonacciHeapNode<Qt::Key, Data> * node)
{
	m_iDegree--;
	if (m_iDegree == 0) // will be empty
		m_pFrontChild = m_pBackChild = NULL;
	else {
		node->m_pLeft->m_pRight = node->m_pRight;
		node->m_pRight->m_pLeft = node->m_pLeft;
		if (m_pFrontChild == node) m_pFrontChild = node->m_pRight;
		if (m_pBackChild == node) m_pBackChild = node->m_pLeft;
	}
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data> * FibonacciHeapNode<Qt::Key, Data>::Duplicate(FibonacciHeapNode<Qt::Key, Data> * parent, FibonacciHeapNode<Qt::Key, Data> * left)
{
	FibonacciHeapNode<Qt::Key, Data> * ret = new FibonacciHeapNode<Qt::Key, Data>(m_Key, m_Data, parent, left, m_pRight, m_pFrontChild, m_pBackChild, m_iDegree, m_bMarked);
	if (ret->m_pFrontChild != NULL) {
		ret->m_pFrontChild = ret->m_pFrontChild->Duplicate(ret, NULL);
		FibonacciHeapNode<Qt::Key, Data> * pTraverse = m_pFrontChild, * pLeft = ret->m_pFrontChild;
		while (pTraverse->m_pRight != m_pFrontChild)
			pLeft = (pTraverse = pTraverse->m_pRight)->Duplicate(ret, pLeft);
		ret->m_pBackChild = pLeft;
		ret->m_pFrontChild->m_pLeft = ret->m_pBackChild;
		ret->m_pBackChild->m_pRight = ret->m_pFrontChild;
	}
	return ret;
}


template<class Qt::Key, class Data>
FibonacciHeap<Qt::Key, Data>::FibonacciHeap()
: m_pFront(NULL), m_pBack(NULL), m_pMin(NULL), m_nLength(0), m_iMaxDegree(0) {
	m_vecAux.resize(1);
}

template<class Qt::Key, class Data>
FibonacciHeap<Qt::Key, Data>::FibonacciHeap(const FibonacciHeap<Qt::Key, Data> & copy)
: m_pFront(copy.m_pFront), m_pBack(copy.m_pBack), m_pMin(copy.m_pMin), m_nLength(copy.m_nLength), m_iMaxDegree(copy.m_iMaxDegree) {
	m_vecAux.resize(m_iMaxDegree + 1);
	if (m_pFront != NULL) {
		m_pMin = m_pFront = m_pFront->Duplicate(NULL, NULL);
		FibonacciHeapNode<Qt::Key, Data> * pTraverse = copy.m_pFront, * pLeft = m_pFront;
		while (pTraverse->m_pRight != copy.m_pFront) {
			pLeft = (pTraverse = pTraverse->m_pRight)->Duplicate(NULL, pLeft);
			if (pTraverse == m_pMin) m_pMin = pLeft;
		}
		m_pBack = pLeft;
		m_pFront->m_pLeft = m_pBack;
		m_pBack->m_pRight = m_pFront;
	}
}

template<class Qt::Key, class Data>
FibonacciHeap<Qt::Key, Data>::~FibonacciHeap()
{
	FibonacciHeapNode<Qt::Key, Data> * pTraverse = m_pFront, * pTemp;
	if (pTraverse == NULL) return;
	while (true) {
		pTemp = pTraverse;
		if (pTraverse == m_pBack) {
			delete pTemp;
			return;
		} else {
			pTraverse = pTraverse->m_pRight;
			delete pTemp;
		}
	}
}

template<class Qt::Key, class Data>
FibonacciHeap<Qt::Key, Data> & FibonacciHeap<Qt::Key, Data>::operator = (const FibonacciHeap<Qt::Key, Data> & copy)
{
	// create new heap
	FibonacciHeapNode<Qt::Key, Data> * pNewFront = copy.m_pFront, * pNewBack = copy.m_pBack, * pNewMin = copy.m_pMin;
	size_t nNewLength = copy.m_nLength, iNewMaxDegree = copy.m_iMaxDegree;
	pNewMin = pNewFront = pNewFront->Duplicate(NULL, NULL);
	FibonacciHeapNode<Qt::Key, Data> * pTraverse = copy.m_pFront, * pLeft = pNewFront;
	while (pTraverse->m_pRight != copy.m_pFront) {
		pLeft = (pTraverse = pTraverse->m_pRight)->Duplicate(NULL, pLeft);
		if (pTraverse == pNewMin) pNewMin = pLeft;
	}
	pNewBack = pLeft;
	pNewFront->m_pLeft = pNewBack;
	pNewBack->m_pRight = pNewFront;

	// delete old heap
	RemoveAll();

	// update with new heap info
	m_pFront = pNewFront;
	m_pBack = pNewBack;
	m_pMin = pNewMin;
	m_nLength = nNewLength;
	m_iMaxDegree = iNewMaxDegree;
	m_vecAux.resize(m_iMaxDegree + 1);

	return *this;
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data> * FibonacciHeap<Qt::Key, Data>::InsertNode(const Qt::Key & key, const Data & data)
{
	FibonacciHeapNode<Qt::Key, Data> * ret = new FibonacciHeapNode<Qt::Key, Data>(key, data);
	TempInsert(ret);
	if (ret->m_Key < m_pMin->m_Key) m_pMin = ret;
	m_nLength++;
	return ret;
}

template<class Qt::Key, class Data>
FibonacciHeap<Qt::Key, Data> & FibonacciHeap<Qt::Key, Data>::Union(FibonacciHeap<Qt::Key, Data> & heap)
{
	if (heap.IsEmpty()) return;

	// update minimum
	if (m_pMin == NULL || heap.m_pMin->m_Key < m_pMin->m_Key) m_pMin = heap.m_pMin;

	// concatenate root lists
	if (IsEmpty()) {
		m_pFront = heap.m_pFront;
		m_pBack = heap.m_pBack;
	} else {
		heap.m_pFront->m_pLeft = m_pBack;
		m_pBack->m_pRight = heap.m_pFront;
		heap.m_pBack->m_pRight = m_pFront;
		m_pBack = m_pFront->m_pLeft = heap.m_pBack;
	}
	m_nLength += heap.m_nLength;
	if (heap.m_iMaxDegree > m_iMaxDegree)
		m_vecAux.resize((m_iMaxDegree = heap.m_iMaxDegree) + 1);

	// destroy other heap
	heap.m_pMin = heap.m_pFront = heap.m_pBack = NULL;
	heap.m_nLength = heap.m_iMaxDegree = 0;
	heap.m_vecAux.clear();
	return *this;
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data> * FibonacciHeap<Qt::Key, Data>::ExtractMin()
{
	FibonacciHeapNode<Qt::Key, Data> * ret = m_pMin, * pTraverse;
	if (ret != NULL) {
		// put children of minimum node in root list
		if (ret->m_iDegree > 0) {
			ret->m_pFrontChild->m_pLeft = m_pBack;
			m_pBack->m_pRight = pTraverse = ret->m_pFrontChild;
			ret->m_pBackChild->m_pRight = m_pFront;
			m_pBack = m_pFront->m_pLeft = ret->m_pBackChild;
			while (true) {
				pTraverse->m_pParent = NULL;
				if (pTraverse == ret->m_pBackChild) break;
				pTraverse = pTraverse->m_pRight;
			}
			ret->m_pFrontChild = ret->m_pBackChild = NULL;
			ret->m_iDegree = 0;
		}
		// remove minimum node from root list
		TempRemove(ret);
		if ((m_nLength--) > 0)
			Consolidate();
		ret->m_pLeft = ret->m_pRight = NULL;
	}
	return ret;
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data> * FibonacciHeap<Qt::Key, Data>::DecreaseKey(FibonacciHeapNode<Qt::Key, Data> * node, const Qt::Key & newKey)
{
	if (newKey < node->m_Key) {
		node->m_Key = newKey;
		FibonacciHeapNode<Qt::Key, Data> * parent = node->m_pParent;
		if (parent != NULL && node->m_Key < parent->m_Key) {
			Cut(node, parent);
			CascadingCut(parent);
		}
		if (node->m_Key < m_pMin->m_Key) m_pMin = node;
	}
	return node;
}

template<class Qt::Key, class Data>
FibonacciHeapNode<Qt::Key, Data> * FibonacciHeap<Qt::Key, Data>::Delete(FibonacciHeapNode<Qt::Key, Data> * node)
{
	FibonacciHeapNode<Qt::Key, Data> * parent = node->m_pParent;
	if (parent != NULL) {
		Cut(node, parent);
		CascadingCut(parent);
	}
	m_pMin = node;
	return ExtractMin();
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::RemoveAll()
{
	FibonacciHeapNode<Qt::Key, Data> * pTraverse = m_pFront, * pTemp;
	if (pTraverse != NULL) {
		while (true) {
			pTemp = pTraverse;
			if (pTraverse == m_pBack) {
				delete pTemp;
				break;
			} else {
				pTraverse = pTraverse->m_pRight;
				delete pTemp;
			}
		}
	}
	m_pFront = m_pBack = m_pMin = NULL;
	m_nLength = m_iMaxDegree = 0;
	m_vecAux.clear();
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::Consolidate()
{
	size_t i, d;
	for (i = 0; i <= m_iMaxDegree; i++)
		m_vecAux[i] = NULL;
	FibonacciHeapNode<Qt::Key, Data> * x, * y, * temp;
	while (m_pFront != NULL) {
		x = m_pFront;
		TempRemove(x);
		d = x->m_iDegree;
		while (m_vecAux[d] != NULL) {
			y = m_vecAux[d];
			if (y->m_Key < x->m_Key) { // ensure that x points to smaller of two keys; swap keys if necessary
				temp = x;
				x = y;
				y = temp;
			}
			Link(x, y);
			m_vecAux[d] = NULL;
			d++;
		}
		m_vecAux[d] = x;
	}
	m_pMin = NULL;
	for (i = 0; i <= m_iMaxDegree; i++) {
		if (m_vecAux[i] != NULL) {
			TempInsert(m_vecAux[i]);
			if (m_pMin == NULL || m_vecAux[i]->m_Key < m_pMin->m_Key) // update minimum value
				m_pMin = m_vecAux[i];
		}
	}
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::Link(FibonacciHeapNode<Qt::Key, Data> * x, FibonacciHeapNode<Qt::Key, Data> * y)
{
	x->InsertChild(y);
	if (m_iMaxDegree < x->m_iDegree) {
		m_iMaxDegree++;
		m_vecAux.push_back(NULL);
	}
	y->m_bMarked = false;
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::TempInsert(FibonacciHeapNode<Qt::Key, Data> * node)
{
	if (m_pFront == NULL) // empty heap
		m_pFront = m_pBack = m_pMin = node->m_pLeft = node->m_pRight = node;
	else {
		node->m_pLeft = m_pBack;
		m_pBack->m_pRight = node;
		node->m_pRight = m_pFront;
		m_pBack = m_pFront->m_pLeft = node;
	}
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::TempRemove(FibonacciHeapNode<Qt::Key, Data> * node)
{
	if (m_pFront == m_pBack) // will be empty heap
		m_pFront = m_pBack = m_pMin = NULL;
	else {
		node->m_pLeft->m_pRight = node->m_pRight;
		node->m_pRight->m_pLeft = node->m_pLeft;
		if (m_pFront == node) m_pFront = node->m_pRight;
		if (m_pBack == node) m_pBack = node->m_pLeft;
		if (m_pMin == node) m_pMin = node->m_pRight; // temporary adjustment
	}
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::Cut(FibonacciHeapNode<Qt::Key, Data> * node, FibonacciHeapNode<Qt::Key, Data> * parent)
{
	parent->RemoveChild(node);
	TempInsert(node);
	node->m_pParent = NULL;
	node->m_bMarked = false;
}

template<class Qt::Key, class Data>
void FibonacciHeap<Qt::Key, Data>::CascadingCut(FibonacciHeapNode<Qt::Key, Data> * node)
{
	FibonacciHeapNode<Qt::Key, Data> * parent = node->m_pParent;
	if (parent != NULL) {
		if (!node->m_bMarked)
			node->m_bMarked = true;
		else {
			Cut(node, parent);
			CascadingCut(parent);
		}
	}
}

#endif
