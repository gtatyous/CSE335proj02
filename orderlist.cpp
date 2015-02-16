/******************************************************
 ** FILE: barista.cpp
 **
 ** CLASS:
 ** CSE335
 **
 ** PROJECT02
 **
 ** AUTHOR:
 ** Ian Bacus and Yousef Gtat
 **
 ** CREATION DATE:
 ** 02/16/2015
 **
 ** NOTES:
 ** The assignment operator is not needed in the main.cpp
 ** file. However, by the rule three, it is implemented
 ** here just in case if it might be utilized in the future.
 *******************************************************/

#include "orderlist.h"


//////////////////////Begin OrangeJuiceOrderList Class Implementation/////////////////////

//Assignment Operator (Not Required)
OrangeJuiceOrderList & OrangeJuiceOrderList::operator= (const OrangeJuiceOrderList &rhs)
{
    if (this != &rhs)
    {
        m_OrderListVector = rhs.m_OrderListVector;
    }
    return *this;
}




/////////////////////Begin BubbleTeaList Class Implementation/////////////////////////////

//Assignment Operator
BubbleTeaList & BubbleTeaList::operator= (const BubbleTeaList &rhs)
{
    if (this != &rhs)
    {
        m_OrderListVector = rhs.m_OrderListVector;
    }
    return *this;
}

