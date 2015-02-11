//Begin BubbleTeaList Class Implementation

//Destructor
BubbleTeaList::~BubbleTeaList()
{
    for (unsigned int i=0; i<m_Order_List.size(); i++) {
        delete m_Order_List[i];
    }
    m_Order_List.clear();
}

//Copy Constructor
BubbleTeaList::BubbleTeaList (const BubbleTeaList & rhs)
{
    OrderList(rhs);
}

//Assignment Operator
BubbleTeaList & BubbleTeaList::operator= (const BubbleTeaList &rhs)
{
    if (this != rhs)
    {
        m_Order_List = rhs.m_Order_List;
    }
    return *this;
}


//Destructor
OrangeJuiceOrderList::~OrangeJuiceOrderList()
{
    for (unsigned int i=0; i<m_Order_List.size(); i++) {
        delete m_Order_List[i];
    }
    m_Order_List.clear();
}

//Copy Constructor
OrangeJuiceOrderList::OrangeJuiceOrderList (const OrangeJuiceOrderList & rhs)
{
    OrderList(rhs);
}

//Assignment Operator
OrangeJuiceOrderList & OrangeJuiceOrderList::operator= (const OrangeJuiceOrderList &rhs)
{
    if (this != rhs)
    {
        m_Order_List = rhs.m_Order_List;
    }
    return *this;
}

