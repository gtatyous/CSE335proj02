/******************************************************
** FILE: filename.cpp
**
** ABSTRACT:
** A general description of the module's role in the
** overall software architecture, What services it
** provides and how it interacts with other components.
**
** DOCUMENTS:
** A reference to the applicable design documents.
**
** AUTHOR:
** Your name here
**
** CREATION DATE:
** 14/03/1998
**
** NOTES:
** Other relevant information
*******************************************************/ 

/* 
* Team: Ian Bacus and Yousef Gtat
* CSE335
* Project01
* Date: 02/16/2015
*
*
*
*/


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
