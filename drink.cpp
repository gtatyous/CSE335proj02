/******************************************************
 ** FILE: drink.cpp
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
 ** Implementation of the drink class is different from
 ** the previous project. It includes full use base class 
 ** constructor and accessors of its private members.
 *******************************************************/

#include "drink.h"
#include <iostream>
using std::cout;
using std::endl;


//This function is used in confirmOrder()

string size(int s)
{
    if (s==1) 
    {
        return "small";
    }
    else if (s==2)
    {
        return "medium";
    } 
    else 
    {
        return "large";    
    }
}


/////////////////////////Begin BubbleTea Class Implementation/////////////////////////////

//Default constructor
BubbleTea:: BubbleTea (string name, int dsize, bool temp, int bsize): Drink(name,dsize)
{
    m_hot = temp;
    m_bubbleSize = bsize;
} 

//Copy Constructor
BubbleTea::BubbleTea (const BubbleTea &rhs)
{
    setCustomerName(rhs.getCustomerName());
    setDrinkSize(rhs.getDrinkSize());
    m_hot = rhs.m_hot;
    m_bubbleSize = rhs.m_bubbleSize; 
}

//Assignment Operator
BubbleTea & BubbleTea::operator= (const BubbleTea &rhs)
{
    if (this != &rhs)
    {
        setCustomerName(rhs.getCustomerName());
        setDrinkSize(rhs.getDrinkSize());
        m_hot = rhs.m_hot;
        m_bubbleSize = rhs.m_bubbleSize;
    }
    return *this;
}

//Prints the customer order
void BubbleTea::confirmOrder() const
{
    cout << "\n" << getCustomerName() << " ordered a " << size(getDrinkSize())<< 
    ((m_hot)? " hot" : " warm")<< " drink of bubble tea with " << 
    size(m_bubbleSize) << " bubbles";
}



///////////////////////Begin OrangeJuice Class Implementation/////////////////////////////


//Default constructor
OrangeJuice:: OrangeJuice (string name, int dsize, bool p): Drink(name,dsize)
{
    m_pulp = p;
} 

//Copy Constructor
OrangeJuice:: OrangeJuice (const OrangeJuice &rhs)
{
    setCustomerName(rhs.getCustomerName());
    setDrinkSize(rhs.getDrinkSize());
    m_pulp = rhs.m_pulp;
}

//Assignment Operator
OrangeJuice & OrangeJuice::operator= (const OrangeJuice &rhs)
{
    if (this != &rhs)
    {
        setCustomerName(rhs.getCustomerName());
        setDrinkSize(rhs.getDrinkSize());
        m_pulp = rhs.m_pulp;    
    } 
    return *this;
}

//Prints the customer order
void OrangeJuice::confirmOrder() const
{
    cout << "\n" << getCustomerName() << " ordered a " << size(getDrinkSize()) <<
    " drink of Orange Juice with " <<
    ( (m_pulp)? "pulp" : "no pulp" );
}
