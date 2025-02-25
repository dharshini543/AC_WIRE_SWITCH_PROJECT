#ifndef WIRE_H
#define WIRE_H
#include <string>
using namespace std;

class Wire
{
private:
    float m_length;
    float m_thickness;
    float m_price;
    string m_colour;
    string m_brand;

public:
    Wire(float length, float thickness, float price, string colour, string brand);
    ~Wire();
};

#endif // WIRE_H
