#ifndef HAVELS_WIRE_H
#define HAVELS_WIRE_H
#include "Wire.h"
using namespace std;

class Havels_wire:public Wire
{
private:
    int* havels = new int[300];
public:
    Havels_wire();
    void turnOnWire();
    void turnOffWire();
    ~Havels_wire();
};

#endif // HAVELS_WIRE_H
