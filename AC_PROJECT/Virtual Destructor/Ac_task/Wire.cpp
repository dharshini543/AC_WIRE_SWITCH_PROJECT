#include "Wire.h"
#include "AC.h"
#include<iostream>

Wire::Wire()
{
    cout<< "Wire constructor"<<endl;
}

void Wire::setAC(AC* A1)
{
    m_AC = A1;
}

void  Wire::turnOnWire()
{
    cout << "Wire is ON"<<endl;
    m_AC->turnOnAC();
}
void Wire::turnOffWire()
{
    cout << "Wire is OFF"<<endl;
    m_AC->turnOffAC();
}

Wire::~Wire()
{
    cout<< "Wire Destructor"<<endl;
    delete[] this->ptr;
}




