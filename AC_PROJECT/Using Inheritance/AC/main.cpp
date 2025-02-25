#include"AC.h"
#include"Switch.h"
#include"Wire.h"
using namespace std;

int main()
{
    AC ac1(1, 40, 40, "Voltas", "white");

    Switch s1(1, 10, 5, 50, "philips", "white");

    Wire wire(100, 2, 1000, "Black", "Finolex");
    s1.setWire(&wire);
    ac1.setWire(&wire);
    s1.turnONSwitch();
    s1.turnOFFSwitch();
    return 0;
}
