#include "pen.h"
#include <iostream>
using namespace std;
int main()
{
    Pen p;
    p.CapColor = red;
    p.Inkcolor = blue;
    p.Shellcolor = pink;
    p.length = 2.5;
    p.Style = ballpoint;

    cout<<p.CapColor;
    return 0;
}