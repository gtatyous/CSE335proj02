/******************************************************
 ** FILE: drink.h
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
 ** All data members of all classes were set private and
 ** therefore mutators and accessors were added to allow
 ** the use of the private data members.
 *******************************************************/


#ifndef DRINK_H
#define DRINK_H

#include <string>
using std::string;


class Drink {
    private:
        int m_drinkSize;
        string m_customerName;
    public:
        Drink()=default;
        Drink (string name, int size) {m_customerName = name; m_drinkSize=size;}
        virtual ~Drink()=default;
        string getCustomerName() const {return m_customerName;}
        void setCustomerName(string n) {m_customerName = n;}
        int getDrinkSize() const {return m_drinkSize;}
        void setDrinkSize(int d) {m_drinkSize = d;}
        virtual void confirmOrder() const = 0;
};



class BubbleTea : public Drink {
    private:
        bool m_hot;
        int m_bubbleSize;                   
    public:
        BubbleTea(string="Anonymous", int=1, bool=true, int=1);
        ~BubbleTea()=default;
        BubbleTea (const BubbleTea &);
        BubbleTea & operator= (const BubbleTea &);
        virtual void confirmOrder() const;
};



class OrangeJuice : public Drink {
    private:
        bool m_pulp;               
    public:
        OrangeJuice(string="Anonymous", int=1, bool=false);
        ~OrangeJuice()=default;
        OrangeJuice(const OrangeJuice &);
        OrangeJuice & operator= (const OrangeJuice &);
        virtual void confirmOrder () const;
};
#endif
