/***************************************************************************
 *   Copyright (C) 2005, Carnegie Mellon University.                       *
 *   Maintained by: Daniel Weller                                          *
 *                  Rahul Mangharam                                        *
 *                  and the rest of the GrooveNet Team                     *
 *                                                                         *
 *   Email: dweller@ece.cmu.edu or rahulm@ece.cmu.edu                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "QMessageList.h"
//Added by qt3to4:
#include <Q3BoxLayout>

QMessageList::QMessageList(QWidget * parent, const char * name, Qt::WFlags f)
: QWidget(parent, name, f)
{
	layout = new Q3BoxLayout(this,Q3BoxLayout::TopToBottom);
	m_listMessages = new Q3ListBox(this,"messages.list");
	m_listMessages->setEnabled(true);
	layout->addWidget(m_listMessages);
}

QMessageList::QMessageList()
{
}

QMessageList::~QMessageList()
{
}

void QMessageList::addMessage(QString msg)
{
	m_listMessages->insertItem(msg);
	m_listMessages->setBottomItem(m_listMessages->numRows()-1);
}

void QMessageList::clear()
{
	m_listMessages->clear();
}
