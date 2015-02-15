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
* Project01
* Date: 02/16/2015
*
*
*
*/


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
    size(m_bubbleSize) << " bubbles" << endl;
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
    ( (m_pulp)? "pulp" : "no pulp" ) << endl;
}
