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
#include <map>
using std::map;

void print(vector<Drink*> &vec)
{
	for (auto ptr : vec)
	{
		ptr->confirmOrder();
	}
}

/////////////////////////////Begin Barista Class Implementation///////////////////////////

// 
void CoolBarista::deliverDrinks(OrderList &OrderList) const
{
// sort into a map
// print the first statment like how many drinks and names
// then 
// print name and its orders using the print function above
}


// 
void NewBieBarista::deliverDrinks(OrderList &order_list_factory) const
{
// sort into a map
// print the first statment like how many drinks and names
// then 
// print name and its orders using the print function above
}
