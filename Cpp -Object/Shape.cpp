#include "Shape.hpp"
#include <iostream>

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
    return (2 * a) + (2 * b);
}


void Circle::setDimensions(int rad)
{
    r = rad;
}

double Circle::getField()
{
    return pi * r * r;
}

double Circle::getCircuit()
{
    return (2 * pi * r);
}


void Triangle::setDimensions(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}

double Triangle::getField()
{
    int per = 0;

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        per = a + b + c;
    }
   
    return per;
}

double Triangle::getCircuit()
{
    double s = (a + b + c) / 2;
    double area = 0;

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    return area;
}
