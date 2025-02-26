#ifndef WIRE_H
#define WIRE_H
#include <string>
//#include"AC.h"
using namespace std;

class AC;
class Wire
{
private:
    string m_colour;
    string m_brand;
    bool m_isWireOn;
    int* ptr = new int[10];
protected:
    AC* m_AC;

public:
    Wire();
    virtual void turnOnWire();
    virtual void turnOffWire();
    void setAC(AC* A1);
    virtual ~Wire();
};

#endif // WIRE_H
