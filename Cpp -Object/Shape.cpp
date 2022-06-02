#include "Shape.hpp"
#include <corecrt_math_defines.h>

void Rectangle::setDimensions(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2*a) + (2*b);
}


void setDimentions(int rad)
{
    r = rad;
}

int Circle::getField()
{
    return pi * r * r;
}

int Circle::getCircuit()
{
    return (2 * pi * r);
}







//void Triangle::setDimensions(int x, int y, int z, int h) 
//{
//    a = x;
//    b = y;
//    c = z;
//    d = h; 
//}
//
//int Triangle::getField() //naiwnie mega bez warunkow mat. ale zmienie, bo wstyd
//{
//    return a * d ;
//}
//
//int Triangle::getCircuit()
//{
//    return a + b + c;
//}

