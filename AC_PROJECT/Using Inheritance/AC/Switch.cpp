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

void Switch::setWire(Wire* wire)
{
    m_wire = wire;
}

void Switch::turnONSwitch()
{
    cout<<"Switch is ON"<<endl;
    m_wire->turnONWire();
}

void Switch::turnOFFSwitch()
{
    cout<<"Switch is OFF"<<endl;
    m_wire->turnOFFWire();

}

Switch::~Switch()
{
    cout<<"Switch Destructor"<<endl;
}
