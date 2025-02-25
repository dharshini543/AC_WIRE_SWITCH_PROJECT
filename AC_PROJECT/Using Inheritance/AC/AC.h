#ifndef AC_H
#define AC_H
#include "Wire.h"
#include <string>
using namespace std;

class AC
{
private:
    int   m_ACnum;
    float m_length;
    float m_width;
    string m_Brand;
    string m_colour;
    bool m_isOn;
    Wire* m_wire;

public:
    AC(int ACnum, float length, float width,  string Brand, string colour);
    void setWire(Wire* wire);
    void turnONAC();
    void turnOFFAC();
    ~AC();
};

#endif // AC_H
