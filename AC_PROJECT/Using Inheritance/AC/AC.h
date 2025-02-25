#ifndef AC_H
#define AC_H
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

public:
    AC(int ACnum, float length, float width,  string Brand, string colour);
    ~AC();
};

#endif // AC_H
