#include "Switch.h"
#include<iostream>

Switch::Switch(int switchNo, float length, float width, float price, string brand, string colour)
{
    cout<<"Switch Constructor"<<endl;
    m_switchno = switchNo;
    m_length = length;
    m_width = width;
    m_price = price;
    m_brand = brand;
    m_colour = colour;
}

Switch::~Switch()
{
    cout<<"Switch Destructor"<<endl;
}
