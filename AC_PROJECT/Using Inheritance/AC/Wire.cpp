#include "Wire.h"
#include"AC.h"
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

void Wire::setAC(AC* ac)
{
    m_ac = ac;
}

void Wire::turnONWire()
{
    cout<<"Wire is ON"<<endl;
    m_ac->turnONAC();
}

void Wire::turnOFFWire()
{
    cout<<"Wire is OFF"<<endl;
    m_ac->turnOFFAC();
}

Wire::~Wire()
{
    cout<<"Wire Destructor"<<endl;
}
