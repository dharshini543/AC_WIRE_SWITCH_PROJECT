#include "AC.h"
#include<iostream>

AC::AC()
{
    cout<< "AC constructor"<<endl;
}

void AC::setWire(Wire* w)
{
    m_wire = w;
    w->setAC(this);
}

AC::~AC()
{
    cout<< "AC Destructor"<<endl;
}

void AC::turnOnAC()
{
    cout<<"AC is turned ON"<<endl<<endl;
}

void AC::turnOffAC()
{
    cout<<"AC is turned OFF"<<endl<<endl;
}


