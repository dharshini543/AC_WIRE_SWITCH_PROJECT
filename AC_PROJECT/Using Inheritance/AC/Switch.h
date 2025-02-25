#ifndef SWITCH_H
#define SWITCH_H
#include "Wire.h"
#include <string>
using namespace std;

class Switch
{
private:
    int m_switchno;
    float m_length;
    float m_width;
    float m_price;
    string m_brand;
    string m_colour;
    Wire* m_wire;

public:
    Switch(int switchNo, float length, float width, float price, string brand, string colour);
    void setWire(Wire* wire);
    void turnONSwitch();
    void turnOFFSwitch();
    ~Switch();
};

#endif // SWITCH_H
