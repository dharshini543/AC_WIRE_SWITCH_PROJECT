#ifndef FINOLEX_WIRE_H
#define FINOLEX_WIRE_H
#include"Wire.h"
using namespace std;

class Finolex_wire:public Wire
{
private:
    int* finolex = new int[100];
public:
    Finolex_wire();
    void turnOnWire();
    void turnOffWire();
    ~Finolex_wire();
};

#endif // FINOLEX_WIRE_H
