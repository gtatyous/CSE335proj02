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

//Begin Barista Class Implementation


//Deliver Drinks by name
void Barista::deliverDrinks(OrderList &order_list_factory) const
{
//	vector<Drink*> order_list_vector = orderfactory.getVector();
//	display(order_list_vector);
	std::map <std::string, vector< Drink* >  > sortmap;//this should be able to hold OJ objects or BT objects
	while(order_list_factory.get_element(index) != nullptr) //perhaps test against size
	{
		//create an entry into the sorting map based on the sorting type
		sortmap[order_list_factory.get_size(index)].push_back(order_list_factory.get_element(index));
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


/*
void NewbieBarista::display() const
{
	std::map <std::string, vector< Drink* >  > sortmap;
	while(data != nullptr) //perhaps test against size
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

void CoolBarista::deliverDrinks(OrderList &order_list_factory) const
{
//	vector<Drink*> order_list_vector = orderfactory.getVector();
//	display(order_list_vector);
	std::map <std::string, vector< Drink* >  > sortmap;//this should be able to hold OJ objects or BT objects
	while(order_list_factory.get_element(index) != nullptr) //perhaps test against size
	{
		//create an entry into the sorting map based on the sorting type
		sortmap[order_list_factory.get_name(index)].push_back(order_list_factory.get_element(index));
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
