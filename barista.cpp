/*
 * barista.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: ianbacus
 */

#include "barista.h"
#include "drink.h"
#include <map>


void NewbieBarista::deliverDrinks(OrderList &orderfactory) const
{
	display(orderfactory.get_vector());
}



void CoolBarista::deliverDrinks(OrderList &orderfactory) const
{
	//this algorithm bins together drinks from an orderlist by their name
	display(orderfactory.get_vector());


}


void NewbieBarista::display(vector<Drink*> &v)
{
std::map <string, vector< Drink* >  > sortmap;
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

//woopeee
void NewbieBarista::display(vector<Drink*> &v)
{
	//this algorithm bins together drinks from an orderlist by their size

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



