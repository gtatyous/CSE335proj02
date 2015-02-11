/*
 * Team: Ian Bacus and Yousef Gtat
 * CSE335
 * Project01
 * Date: 02/16/2015
 *
 *
 *
 */

#include "barista.h"
#include <map>
using std::map;

//Begin OrangeJuiceOrderList Class Implementation

//Destructor
OrangeJuiceOrderList::~OrangeJuiceOrderList()
{
    for (unsigned int i=0; i<m_Order_List.size(); i++) {
        delete m_Order_List[i];
    }
    m_Order_List.clear();
}

//Copy Constructor
OrangeJuiceOrderList::OrangeJuiceOrderList (const OrangeJuiceOrderList & rhs)
{
    OrderList(rhs);
}

//Assignment Operator
OrangeJuiceOrderList & OrangeJuiceOrderList::operator= /(const OrangeJuiceOrderList &rhs)
{
    if (this != rhs)
    {
        m_Order_List = rhs.m_Order_List;
    }
    return *this;
}



//Begin BubbleTeaList Class Implementation

//Destructor
BubbleTeaList::~BubbleTeaList()
{
    for (unsigned int i=0; i<m_Order_List.size(); i++) {
        delete m_Order_List[i];
    }
    m_Order_List.clear();
}

//Copy Constructor
BubbleTeaList::BubbleTeaList (const BubbleTeaList & rhs)
{
    OrderList(rhs);
}

//Assignment Operator
BubbleTeaList & BubbleTeaList::operator= /(const BubbleTeaList &rhs)
{
    if (this != rhs)
    {
        m_Order_List = rhs.m_Order_List;
    }
    return *this;
}




//Begin Barista Class Implementation

//Deliver Drinks by name
void CoolBarista::deliverDrinks(OrderList &OL) const
{
    
}

//Deliver Drinks by drink size
void NewbieBarista::deliverDrinks(OrderList &OL) const
{

}























/////////////////////////////////////////////////////////////////

/*
void CoolBarista::deliverDrinks(OrderList &orderfactory) const
{
    map <string, vector< Drink* >  > sortmap;
    for(auto it = v.begin() ; it != v.end(); ++it)
    {
        sortmap[(*it).get_size()].push_back(*it);
    }

    for(auto kitr = sortmap.begin(); kitr != sortmap.end(); kitr++)
    {
	cout << "I have " << (kitr->second).size() << "drinks of size " << *kitr;
	for( auto kvitr = (kitr->second).begin(); kvitr != (kitr->second).end(); kvitr++ )
	{
		(*kvitr).confirmOrder();

	std::map <int, vector< Drink* >  > sortmap;
	for(auto it = v.begin() ; it != v.end(); ++it)
	{
		//create an entry into the sorting map based on the sorting type
		sortmap[(*it).get_size()].push_back(*it);
	}

	//loop for printing objects. key is the size of the drink, value is a vector of drinks
	for(auto kitr = sortmap.begin(); kitr != sortmap.end(); kitr++)
	{
		cout << "I have " << (kitr->second).size() << "drinks of size " << *kitr;
		for( auto kvitr = (kitr->second).begin(); kvitr != (kitr->second).end(); kvitr++ )
		{
			(*kvitr).confirmOrder();
		}
	}

}
*/


