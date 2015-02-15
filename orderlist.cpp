/******************************************************
** FILE: filename.cpp
**
** ABSTRACT:
** A general description of the module's role in the
** overall software architecture, What services it
** provides and how it interacts with other components.
**
** DOCUMENTS:
** A reference to the applicable design documents.
**
** AUTHOR:
** Your name here
**
** CREATION DATE:
** 14/03/1998
**
** NOTES:
** Other relevant information
*******************************************************/ 
/*
 * Team: Ian Bacus and Yousef Gtat
 * CSE335
 * Project02
 * Date: 02/16/2015
 *
 *
 *
 */


#include "orderlist.h"


//////////////////////Begin OrangeJuiceOrderList Class Implementation/////////////////////

//Assignment Operator (Not Required)
OrangeJuiceOrderList & OrangeJuiceOrderList::operator= (const OrangeJuiceOrderList &rhs)
{
    if (this != rhs)
    {
        m_OrderList_vector = rhs.m_OrderList_vector;
    }
    return *this;
}




/////////////////////Begin BubbleTeaList Class Implementation/////////////////////////////

//Assignment Operator
BubbleTeaList & BubbleTeaList::operator= (const BubbleTeaList &rhs)
{
    if (this != rhs)
    {
        m_OrderListVector = rhs.m_OrderListVector;
    }
    return *this;
}

