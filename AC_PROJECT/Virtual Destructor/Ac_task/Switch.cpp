#include "Switch.h"
#include<iostream>

Switch::Switch()
{
    cout<< "Switch constructor"<<endl;
}

void Switch::setWire(Wire* w)
{
    m_wire = w;
}

Switch::~Switch()
{
    cout<< "Switch Destructor"<<endl;
}

void Switch::turnOnSwitch()
{
    cout<<"Switch is turned On"<<endl;
    m_wire->turnOnWire();

}
void Switch::turnOffSwitch()
{
    cout<<"Switch is turned OFF"<<endl;
    m_wire->turnOffWire();

}

