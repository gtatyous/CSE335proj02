/*
 * Team: Ian Bacus and Yousef Gtat
 * CSE335
 * Project01
 * Date: 02/16/2015
 *
 *
 *
 */

#include "orderlist.h"


//Begin OrangeJuiceOrderList Class Implementation

//Destructor
OrangeJuiceOrderList::~OrangeJuiceOrderList()
{
    for (unsigned int i=0; i<m_OrderList_vector.size(); i++)
    {
        delete m_OrderList_vector[i];
    }
    m_OrderList_vector.clear();
}


//Copy Constructor
OrangeJuiceOrderList::OrangeJuiceOrderList (const OrangeJuiceOrderList & rhs)
{
    m_OrderList_vector = rhs.m_OrderList_vector;
}


//Assignment Operator
OrangeJuiceOrderList & OrangeJuiceOrderList::operator= (const OrangeJuiceOrderList &rhs)
{
    if (this != rhs)
    {
        m_OrderList_vector = rhs.m_OrderList_vector;
    }
    return *this;
}

Drink* OrangeJuiceOrderList::getElement(unsigned int index)
{
    return &m_OrderList_vector[index]; //return a bubble tea object, maybe a pointer
}



//Begin BubbleTeaList Class Implementation

//Destructor
BubbleTeaList::~BubbleTeaList()
{
    for (unsigned int i=0; i<m_OrderList_vector.size(); i++)
    {
        delete m_OrderList_vector[i];
    }
    m_OrderList_vector.clear();
}


//Copy Constructor
BubbleTeaList::BubbleTeaList (const BubbleTeaList & rhs)
{
    m_OrderList_vector = rhs.m_OrderList_vector;
}

Drink* BubbleTeaList::getElement(unsigned int index)
{
    return &m_OrderList_vector[index]; //return a bubble tea object, maybe a pointer
}

//Assignment Operator
BubbleTeaList & BubbleTeaList::operator= (const BubbleTeaList &rhs)
{
    if (this != rhs)
    {
        m_OrderList_vector = rhs.m_OrderList_vector;
    }
    return *this;
}

