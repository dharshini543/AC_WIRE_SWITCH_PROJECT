#include "AC.h"
#include<iostream>

AC::AC(int ACnum, float length, float width, string Brand, string colour)
{
    cout<<"AC Constructor"<<endl;
    m_ACnum = ACnum;
    m_length = length;
    m_width = width;
    m_Brand = Brand;
    m_colour = colour;
}

AC::~AC()
{
    cout<<"AC Destructor"<<endl;
}
