/*
 * Team: Ian Bacus and Yousef Gtat
 * CSE335
 * Project02
 * Date: 02/16/2015
 *
 *
 *
 */

#ifndef BARISTA_H_
#define BARISTA_H_

#include "drink.h"
#include <vector>
using std::vector;


//Abstract factory class
class OrderList
{
public:
    //Delet the Drink objects inside m_Drinks_list
    virtual ~OrderList();
    
    //pure virtual Accessor function
    virtual vector<Drink*> get_OrderList()=0;
};



class OrangeJuiceOrderList : public OrderList
{
private:
    vector<OrangeJuice*> m_OrderList_vector;
public:
    //In case nothing was passed
    OrangeJuiceOrderList()=default;
    
    //Initialize m_Drinks_list using the base class constructor
    virtual OrangeJuiceOrderList(vector<OrangeJuice*> &OJ_OL): m_OrderList_vector(OJ_OL){}
    
    //Implements delete OJ and BT objects
    virtual ~OrangeJuiceOrderList();
    
    //Copy constructor which is needed in the main.cpp
    OrangeJuiceOrderList(const OrangeJuiceOrderList &);
    
    //Assignment Operator which is NOT needed in the main.cpp file
    OrangeJuiceOrderList & operator= (const OrangeJuiceOrderList &);
    
    //Virtual accessor function
    virtual vector<OrangeJuice*> get_OrderList() {return m_OrderList_vector;}
};



class BubbleTeaList : public OrderList
{
private:
    vector<BubbleTea*> m_OrderList_vector;
public:
    //In case nothing was passed
    BubbleTeaList()=default;
    
    //Initialize m_Drinks_list using the base class constructor
    virtual BubbleTeaList(vector<BubbleTea*> &BT_OL): m_OrderList_vector(BT_OL) {}
    
    //Implements delete OJ and BT
    virtual ~BubbleTeaList();
    
    //Copy constructor which is needed for the main.cpp
    BubbleTeaList(const BubbleTeaList &);
    
    //Assignment Operator which is NOT needed in the main.cpp file
    BubbleTeaList & operator= (const BubbleTeaList &);
    
    //Virtual accessor function
    virtual vector<BubbleTea*> get_OrderList() {return m_OrderList_vector;}
};

#endif
