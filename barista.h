/******************************************************
 ** FILE: barista.h
 **
 ** CLASS:
 ** CSE335
 **
 ** PROJECT02
 **
 ** AUTHOR:
 ** Ian Bacus and Yousef Gtat
 **
 ** CREATION DATE:
 ** 02/16/2015
 **
 ** NOTES:
 ** N/A
 *******************************************************/

#ifndef BARISTA_H_
#define BARISTA_H_

#include "orderlist.h"

//Interface and algorithm class
class Barista
{
public:
	//Default Constructor
	Barista()=default;
	
    //Default destructor
    virtual ~Barista()=default;
    
    //Sorts the OrderList and displays it
    virtual void deliverDrinks(AbstractOrderListFactory*) const =0;
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
    virtual void deliverDrinks(AbstractOrderListFactory*) const;
};



class NewbieBarista : public Barista
{
	public:
        //Default constructor
        NewbieBarista()=default;
    
        //Default destructor
        virtual ~NewbieBarista()=default;
    
        //Copy constructor which is needed in the main.cpp
        NewbieBarista(const NewbieBarista &)=default;
    
        //Assignment Operator which is NOT needed in the main.cpp file
        NewbieBarista & operator= (const NewbieBarista &)=default;
    
        //Sorts the OrderList and displays it
		virtual void deliverDrinks(AbstractOrderListFactory*) const;
};

#endif
