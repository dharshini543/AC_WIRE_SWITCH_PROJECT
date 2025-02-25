#include "Wire.h"
#include<iostream>

Wire::Wire(float length, float thickness, float price, string colour, string brand)
{
    cout<<"Wire Constructor"<<endl;
    m_length = length;
    m_thickness = thickness;
    m_price = price;
    m_colour = colour;
    m_brand = brand;
}

Wire::~Wire()
{
    cout<<"Wire Destructor"<<endl;
}
