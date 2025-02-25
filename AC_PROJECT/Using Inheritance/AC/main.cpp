#include"AC.h"
#include"Switch.h"
#include"Wire.h"
using namespace std;

int main()
{
    AC ac1(1, 40, 40, "Voltas", "white");
    AC ac2(2, 40, 40, "Voltas", "white");
    AC ac3(3, 40, 40, "Voltas", "white");
    AC ac4(4, 40, 40, "Voltas", "white");
    AC ac5(5, 40, 40, "Voltas", "white");
    AC ac6(6, 40, 40, "Voltas", "white");
    AC ac7(7, 40, 40, "Voltas", "white");

    Switch s1(1, 10, 5, 50, "philips", "white");
    Switch s2(2, 10, 5, 50, "philips", "white");
    Switch s3(3, 10, 5, 50, "philips", "white");
    Switch s4(4, 10, 5, 50, "philips", "white");
    Switch s5(5, 10, 5, 50, "philips", "white");
    Switch s6(6, 10, 5, 50, "philips", "white");
    Switch s7(7, 10, 5, 50, "philips", "white");

    Wire wire(100, 2, 1000, "Black", "Finolex");
    return 0;
}
