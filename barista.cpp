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

#include "barista.h"
#include <iostream>
#include <map>
using std::map;
using std::cout;
using std::endl;
/*void print(vector<Drink*> &vec)
{
	for (auto ptr : vec)
	{
		ptr->confirmOrder();
	}
}*/

/////////////////////////////Begin Barista Class Implementation///////////////////////////

// 
void CoolBarista::deliverDrinks(AbstractOrderListFactory *OrderListPtr) const
{
    map<string, vector<Drink*>> nameOrderListMap;
    Drink* objectPtr;
    string name;
    for (int i=0; i<OrderListPtr->getOrderListSize(); i++)
    {
        objectPtr = OrderListPtr->getDrinkObject(i);
        name = objectPtr->getCustomerName();
        nameOrderListMap[name].push_back(objectPtr);
    }
    
    // sort map alphabatically
    
    cout<< "Cool Barista: Order's up!";
// print the first statment like how many drinks and names
// then 
// print name and its orders using the print function above
}


// 
void NewbieBarista::deliverDrinks(AbstractOrderListFactory *OrderListPtr) const
{
    map<int, vector<Drink*>> sizeOrderListMap;
    Drink* objectPtr;
    int size;
    for (int i=0; i<OrderListPtr->getOrderListSize(); i++)
    {
        objectPtr = OrderListPtr->getDrinkObject(i);
        size = objectPtr->getDrinkSize();
        sizeOrderListMap[size].push_back(objectPtr);
    }
    cout<< "Cool Barista: Order's up!";
// sort into a map
// print the first statment like how many drinks and names
// then 
// print name and its orders using the print function above
}
