#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED
using namespace std;
enum Color {blue, red, green, pink};
enum PenStyle {ballpoint, fountainpen};

class Pen
{
    public:
        Color Inkcolor;
        Color Shellcolor;
        Color CapColor;
        PenStyle Style;
        float length;
        //char *brand;

};
#endif
