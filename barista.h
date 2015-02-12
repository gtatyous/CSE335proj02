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

#include "orderlist.h"

//Interface and algorithm class
class Barista
{
	public:
		virtual ~Barista()=default;
		virtual void deliverDrinks(OrderList &)=0;
};



class CoolBarista : public Barista
{
	public:
        CoolBarista()=default;
        virtual ~CoolBarista()=default;
		virtual void deliverDrinks(OrderList &) const;
};



class NewbieBarista : public Barista
{
	public:
        NewbieBarista()=default;
        virtual ~CoolBarista()=default;
		virtual void deliverDrinks(OrderList &) const;
};

#endif
