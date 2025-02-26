#include "AC.h"
#include "Finolex_wire.h"
#include "Havels_wire.h"
#include "Polycab_wire.h"
#include "Switch.h"
#include "Wire.h"
#include <iostream>
using namespace std;

enum wires
{
    wire = 1,
    Polycab,
    Finolex,
    Havels
};

int main()
{
    Wire* P = NULL;
    AC ac1;
    Switch s1;

    /*P = new Wire;
    delete P;
    P = new Polycab_wire;
    delete P;
    P = new Finolex_wire;
    delete P;
    P = new Havels_wire;
    delete P;*/

    int choice;
    cout<<endl;
    cout<<"Which Brand of Wire"<<endl;
    cout<<"Enter 1. Wire"<<endl;
    cout<<"Enter 2. Polycab wire"<<endl;
    cout<<"      3. Finolex wire"<<endl;
    cout<<"      4. Havels  wire"<<endl;
    cin>>choice;
    switch(choice)
    {
    case wire:
    {
        P = new Wire;
        break;
    }
    case Polycab:
    {
        P = new Polycab_wire;
        break;
    }
    case Finolex:
    {
        P = new Finolex_wire;
        break;
    }
    case Havels:
    {
        P = new Havels_wire;
        break;
    }
    default:
        cout<<"Invalid input"<<endl;
        break;
    }

    s1.setWire(P);
    ac1.setWire(P);
    s1.turnOnSwitch();

    delete P;

    return 0;
}
