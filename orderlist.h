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
class OrderList
{
public:
    //Delet the Drink objects inside m_Drinks_list
    virtual ~OrderList();
    
    //Get the customer name
    virtual string get_name(int)=0;
    
    //Get the drink size
    virtual int get_size(int)=0;
    
    virtual Drink* get_element(int);
    
};



class OrangeJuiceOrderList : public OrderList
{
private:
    vector<OrangeJuice*> m_OrderList_vector;
public:
    //In case nothing was passed
    OrangeJuiceOrderList()=default;
    
    //Initialize m_Drinks_list using the base class constructor
    OrangeJuiceOrderList(vector<OrangeJuice*> &OJ_OL) {m_OrderList_vector=OJ_OL;}
    
    //Implements delete the OrangeJuice objects
    virtual ~OrangeJuiceOrderList();
    
    //Copy constructor which is needed in the main.cpp
    OrangeJuiceOrderList(const OrangeJuiceOrderList &);
    
    //Assignment Operator which is NOT needed in the main.cpp file
    OrangeJuiceOrderList & operator= (const OrangeJuiceOrderList &);
    
    //Virtual accessor function
    virtual vector<OrangeJuice*> get_OrderList() {return m_OrderList_vector;}
    
    //Get the customer name
    virtual string get_name(int index) {return m_OrderList_vector[index]->customer_name;}

    //Get the drink size
    virtual int get_size(int index) {return m_OrderList_vector[index]->drink_size;}

    virtual OrangeJuice* get_element(int) {return m_OrderList_vector[index]}

};



class BubbleTeaList : public OrderList
{
private:
    vector<BubbleTea*> m_OrderList_vector;
public:
    //In case nothing was passed
    BubbleTeaList()=default;
    
    //Initialize m_Drinks_list using the base class constructor
    BubbleTeaList(vector<BubbleTea*> &BT_OL) {m_OrderList_vector=BT_OL;}
    
    //Implements delete BubbleTea object
    virtual ~BubbleTeaList();
    
    //Copy constructor which is needed for the main.cpp
    BubbleTeaList(const BubbleTeaList &);
    
    //Assignment Operator which is NOT needed in the main.cpp file
    BubbleTeaList & operator= (const BubbleTeaList &);
    
    //Virtual accessor function
    virtual vector<BubbleTea*> get_OrderList() {return m_OrderList_vector;}
    
    //Get the customer name
    virtual string get_name(int index) {return m_OrderList_vector[index]->customer_name;}
    
    //Get the drink size
    virtual int get_size(int index) {return m_OrderList_vector[index]->drink_size;}
    virtual BubbleTea* get_element(int) {return m_OrderList_vector[index];}

};

#endif
