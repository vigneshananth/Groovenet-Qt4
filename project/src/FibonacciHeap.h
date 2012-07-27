/***************************************************************************
                          FibonacciHeap.h  -  Implementation of Fibonacci
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

#ifndef _FIBONACCIHEAP_H
#define _FIBONACCIHEAP_H


/**
  *@author Daniel Weller
  */

#include <stdlib.h>
#include <vector>



template<class Qt, class Data> class FibonacciHeap;

template<class Qt, class Data>   
class FibonacciHeapNode {
public:
	FibonacciHeapNode(const Qt & key, const Data & data, FibonacciHeapNode<Qt, Data> * pParent = NULL, FibonacciHeapNode<Qt, Data> * pLeft = NULL, FibonacciHeapNode<Qt, Data> * pRight = NULL, FibonacciHeapNode<Qt, Data> * pFrontChild = NULL, FibonacciHeapNode<Qt, Data> * pBackChild = NULL, const size_t iDegree = 0, const bool bMarked = false);
	~FibonacciHeapNode();

	inline const Qt & getKey() const {return m_Key;}

	Data m_Data;

protected:
	Qt m_Key;
	FibonacciHeapNode<Qt, Data> * m_pParent, * m_pLeft, * m_pRight;
	FibonacciHeapNode<Qt, Data> * m_pFrontChild, * m_pBackChild;
	size_t m_iDegree; // number of children in child list
	bool m_bMarked;

	friend class FibonacciHeap<Qt, Data>;

	void InsertChild(FibonacciHeapNode<Qt, Data> * node);
	void RemoveChild(FibonacciHeapNode<Qt, Data> * node);
	FibonacciHeapNode<Qt, Data> * Duplicate(FibonacciHeapNode<Qt, Data> * parent, FibonacciHeapNode<Qt, Data> * left);

private:
	// disable assignment of nodes - could be messy!
	FibonacciHeapNode(const FibonacciHeapNode<Qt, Data> & copy);
	FibonacciHeapNode<Qt, Data> & operator = (const FibonacciHeapNode<Qt, Data> & copy);
};

template<class Qt, class Data>
class FibonacciHeap {
public: 
	FibonacciHeap();
	FibonacciHeap(const FibonacciHeap<Qt, Data> & copy);
	~FibonacciHeap();

	FibonacciHeap<Qt, Data> & operator = (const FibonacciHeap<Qt, Data> & copy);

	FibonacciHeapNode<Qt, Data> * InsertNode(const Qt & key, const Data & data);

	inline const FibonacciHeapNode<Qt, Data> * Min() const {return m_pMin;}
	inline bool IsEmpty() const {return m_nLength == 0;}

	FibonacciHeap<Qt, Data> & Union(FibonacciHeap<Qt, Data> & heap);
	FibonacciHeapNode<Qt, Data> * ExtractMin();
	FibonacciHeapNode<Qt, Data> * DecreaseKey(FibonacciHeapNode<Qt, Data> * node, const Qt & newKey);
	FibonacciHeapNode<Qt, Data> * Delete(FibonacciHeapNode<Qt, Data> * node); // equivalent to decreasing the key to below minimum, then extracting the min
	void RemoveAll();
	inline unsigned int Count() const { return m_nLength; }

protected:
	FibonacciHeapNode<Qt, Data> * m_pFront, * m_pBack, * m_pMin;
	size_t m_nLength, m_iMaxDegree;
	std::vector<FibonacciHeapNode<Qt, Data> *> m_vecAux; // auxilliary vector for consolidation

	void Consolidate(); // helper function for extract-min
	void Link(FibonacciHeapNode<Qt, Data> * x, FibonacciHeapNode<Qt, Data> * y);
	void TempInsert(FibonacciHeapNode<Qt, Data> * node); // append node to end of root list (but not completely add to heap)
	void TempRemove(FibonacciHeapNode<Qt, Data> * node); // remove node from root list but not entirely from heap
	void Cut(FibonacciHeapNode<Qt, Data> * node, FibonacciHeapNode<Qt, Data> * parent); // this and next function used in decrease-key
	void CascadingCut(FibonacciHeapNode<Qt, Data> * node); // cascading effect
};

//#include "FibonacciHeap.cpp"

#endif
