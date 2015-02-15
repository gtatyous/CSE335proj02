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

#ifndef ORDERLIST_H_
#define ORDERLIST_H_

#include "drink.h"
#include <vector>
using std::vector;


//Abstract factory class
class AbstractOrderListFactory
{
public:
	//Default constructor
	AbstractOrderListFactory()=default;
	
    //Delete the Drink objects inside m_Drinks_list
    virtual ~AbstractOrderListFactory()=default;
    
    //Get the size of the Order List Vector
    virtual int getOrderListSize() const =0;
    
    //Get the Drink object in the order list vector at certain index
    virtual Drink* getDrinkObject (int index) const=0;    
};



class OrangeJuiceOrderList : public AbstractOrderListFactory
{
private:
    vector<OrangeJuice*> m_OrderListVector;
public:
    //Default constructor
    OrangeJuiceOrderList()=default;
    
    //Constructor that shallow copies the order list
    OrangeJuiceOrderList(vector<OrangeJuice*> &OJ_OL): m_OrderListVector(OJ_OL) {}
    
    //Implements delete OrangeJuice objects
    virtual ~OrangeJuiceOrderList()=default;
    
    //Shallow Copy constructor
    OrangeJuiceOrderList(const OrangeJuiceOrderList &rhs): m_OrderListVector(rhs.m_OrderListVector){}
    
    //Assignment Operator which is NOT needed in the main.cpp file
    //OrangeJuiceOrderList & operator= (const OrangeJuiceOrderList &);
    
    //Get the size of the Order List Vector
    virtual int getOrderListSize() const {return m_OrderListVector.size();}
    
    //Get the Drink object in the order list vector at certain index
    virtual OrangeJuice* getDrinkObject (int index) const {return m_OrderListVector[index];}
};



class BubbleTeaList : public AbstractOrderListFactory
{
private:
    vector<BubbleTea*> m_OrderListVector;
public:
    //Default constructor
    BubbleTeaList()=default;
    
    //Constructor that shallow copies the order list
    BubbleTeaList(vector<BubbleTea*> &BT_OL): m_OrderListVector(BT_OL) {}
    
    //Implements delete BubbleTea objects
    virtual ~BubbleTeaList() =default;
    
    //Shallow Copy constructor
    BubbleTeaList(const BubbleTeaList &rhs): m_OrderListVector(rhs.m_OrderListVector) {}
    
    //Assignment Operator which is NOT needed in the main.cpp file
    //BubbleTeaList & operator= (const BubbleTeaList &);
    
    //Get the size of the Order List Vector
    virtual int getOrderListSize() const {return m_OrderListVector.size();}
    
    //Get the Drink object in the order list vector at certain index
    virtual Drink* getDrinkObject (int index) const {return m_OrderListVector[index];}
};

#endif
