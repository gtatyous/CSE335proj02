/*
 * barista.h
 *
 *  Created on: Feb 8, 2015
 *      Author: ianbacus
 */

#ifndef BARISTA_H_
#define BARISTA_H_

#ifndef BARISTA_H
#define BARISTA_H

#include "drink.h"
#include <map>
using std::vector;
using std::cout;
using std::endl;
using std::map;

//make each concrete factory a singleton
//

class Barista
{
//abstract factory

	public:
		//virtual void deliverDrinks(std::vector<Drink*> & OjOrderList);
		virtual ~Barista() {};
		virtual void deliverDrinks(OrderList &) const;
		virtual void display(vector<Drink*> &v) const;
	protected:
		virtual void deliverDrinks(OrderList &)=0;


};

class CoolBarista : public Barista
{
	private:
		//static volatile CoolBarista instance= NULL;

	public:
		virtual void deliverDrinks(OrderList &) const;
		virtual void display(vector<Drink*> &v) const;

};

class NewbieBarista : public Barista
{
	private:
		//static volatile CoolBarista  instance= NULL;
	public:
		virtual void deliverDrinks(OrderList &) const;
		virtual void display(vector<Drink*> &v) const;

};




class OrderList
{
public:
	OrderList(vector<Drink*> &v) : order(v) {}

protected:
	vector<Drink*> order;

};

class OrangeJuiceOrderList : public OrderList
{
	OrangeJuiceOrderList(vector<Drink*> &) : OrderList(vector<Drink*> &) {}

};

class BubbleTeaList : public OrderList
{
	BubbleTeaList(vector<Drink*> &) : OrderList(vector<Drink*> &) {}

};


#endif


#endif /* BARISTA_H_ */
