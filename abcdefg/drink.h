/* 
* Team: Ian Bacus and Yousef Gtat
* CSE335
* Project01
* Date: 02/05/2015
*
*
*
*/


#ifndef DRINK_H
#define DRINK_H

#include <string>
using std::string;


class Drink {
    protected:
        int drink_size;
        string customer_name;
    public:
        Drink (string name, int size) {customer_name = name; drink_size=size;}
        virtual void confirmOrder() const = 0;
        virtual ~Drink()=default;
};



class BubbleTea : public Drink {
    protected:
        bool hot;
        int bubble_size;                   
    public:
        BubbleTea(string="Anonymous", int=1, bool=true, int=1);
        BubbleTea (const BubbleTea &);
        BubbleTea & operator= (const BubbleTea &);
        virtual void confirmOrder() const;
        ~BubbleTea()=default;
};



class OrangeJuice : public Drink {
    protected:
        bool pulp;               
    public:
        OrangeJuice(string="Anonymous", int=1, bool=false);
        OrangeJuice(const OrangeJuice &);
        OrangeJuice & operator= (const OrangeJuice &);
        virtual void confirmOrder () const;
        ~OrangeJuice()=default;
};
#endif
