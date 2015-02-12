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
    //Default destructor
    virtual ~Barista()=default;
    
    //Sorts the OrderList and displays it
    virtual void deliverDrinks(OrderList &)=0;
};



class CoolBarista : public Barista
{
public:
    //Default constructor
    CoolBarista()=default;
    
    //Default destructor
    virtual ~CoolBarista()=default;
    
    //Copy constructor which is needed in the main.cpp
    CoolBarista(const CoolBarista &)=default;
    
    //Assignment Operator which is NOT needed in the main.cpp file
    CoolBarista & operator= (const CoolBarista &)=default;
    
    //Sorts the OrderList and displays it
    virtual void deliverDrinks(OrderList &) const;
};



class NewbieBarista : public Barista
{
	public:
        //Default constructor
        NewbieBarista()=default;
    
        //Default destructor
        virtual ~CoolBarista()=default;
    
        //Copy constructor which is needed in the main.cpp
        CoolBarista(const CoolBarista &)=default;
    
        //Assignment Operator which is NOT needed in the main.cpp file
        CoolBarista & operator= (const CoolBarista &)=default;
    
        //Sorts the OrderList and displays it
		virtual void deliverDrinks(OrderList &) const;
};

#endif
