/*
 * Team: Ian Bacus and Yousef Gtat
 * CSE335
 * Project02
 * Date: 02/16/2015
 *
 *
 *
 */


#include "drink.h"
#include <iostream>
using std::cout;
using std::endl;


//This function is used in confirmOrder()

string size(int s)
{
    if (s==1) {
        return "small";
    } else if (s==2) {
        return "medium";
    } else {
        return "large";    
    }
}


//Begin BubbleTea Class Implementation

//Default constructor
BubbleTea:: BubbleTea (string name, int dsize, bool temp, int bsize): Drink(name,dsize)
{
    hot = temp;
    bubble_size = bsize;
} 

//Copy Constructor
BubbleTea::BubbleTea (const BubbleTea &rhs): Drink(rhs.customer_name, rhs.drink_size)
{
    hot = rhs.hot;
    bubble_size = rhs.bubble_size; 
}

//Assignment Operator
BubbleTea & BubbleTea::operator= (const BubbleTea &rhs)
{
    if (this != &rhs)
    {
        customer_name = rhs.customer_name;
        drink_size = rhs.drink_size;
        hot = rhs.hot;
        bubble_size = rhs.bubble_size;
    }
    return *this;
}

//Prints the customer order
void BubbleTea::confirmOrder() const
{
    cout << customer_name << " ordered a " << size(drink_size)<< 
    ((hot)? " hot" : " warm")<< " drink of bubble tea with " << 
    size(bubble_size) << " bubble";
    // no need for endl; it's already included in main.cpp
}



//Begin OrangeJuice Class Implementation


//Default constructor
OrangeJuice:: OrangeJuice (string name, int dsize, bool p): Drink(name,dsize)
{
    pulp = p;
} 

//Copy Constructor
OrangeJuice:: OrangeJuice (const OrangeJuice &rhs): Drink(rhs.customer_name, rhs.drink_size)
{
    pulp = rhs.pulp;
}

//Assignment Operator
OrangeJuice & OrangeJuice::operator= (const OrangeJuice &rhs)
{
    if (this != &rhs)
    {
        customer_name = rhs.customer_name;
        drink_size = rhs.drink_size;
        pulp = rhs.pulp;    
    } 
    return *this;
}

//Prints the customer order
void OrangeJuice::confirmOrder() const
{
    cout << customer_name << " ordered a " << size(drink_size) <<
    " drink of Orange Juice with " <<
    ( (pulp)? "pulp" : "no pulp" ); // no need for endl
}
