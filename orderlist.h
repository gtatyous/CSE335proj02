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
 ** Note that  all  constructors are performing shallow
 ** copy which  means  it is creating new pointers that
 ** point to the  same  allocated memory. Deleting the
 ** allocated memory is already have been taken care of
 ** in the  main.cpp  file. As  a  result,  the default
 ** destructors are sufficient to delete those pointers.
 *******************************************************/

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
	
    //Default destructor
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
    
    //Shallow-Copy Constructor
    OrangeJuiceOrderList(vector<OrangeJuice*> &OJ_OL): m_OrderListVector(OJ_OL) {}
    
    //Default Destructor
    virtual ~OrangeJuiceOrderList()=default;
    
    //Shallow-Copy Copy Constructor
    OrangeJuiceOrderList(const OrangeJuiceOrderList &rhs): m_OrderListVector(rhs.m_OrderListVector){}
    
    //Assignment Operator which is NOT needed in the main.cpp file
    OrangeJuiceOrderList & operator= (const OrangeJuiceOrderList &);
    
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
    
    //Shallow-Copy Constructor
    BubbleTeaList(vector<BubbleTea*> &BT_OL): m_OrderListVector(BT_OL) {}
    
    //Implements delete BubbleTea objects
    virtual ~BubbleTeaList() =default;
    
    //Shallow-Copy Copy Constructor
    BubbleTeaList(const BubbleTeaList &rhs): m_OrderListVector(rhs.m_OrderListVector) {}
    
    //Assignment Operator which is NOT needed in the main.cpp file
    BubbleTeaList & operator= (const BubbleTeaList &);
    
    //Get the size of the Order List Vector
    virtual int getOrderListSize() const {return m_OrderListVector.size();}
    
    //Get the Drink object in the order list vector at certain index
    virtual Drink* getDrinkObject (int index) const {return m_OrderListVector[index];}
};

#endif
