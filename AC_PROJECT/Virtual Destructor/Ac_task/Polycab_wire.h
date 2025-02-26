#ifndef POLYCAB_WIRE_H
#define POLYCAB_WIRE_H
#include "Wire.h"
using namespace std;

class Polycab_wire:public Wire
{
private:
    int* polycab = new int[200];
public:
    Polycab_wire();
    void turnOnWire();
    void turnOffWire();
    ~Polycab_wire();
};

#endif // POLYCAB_WIRE_H
