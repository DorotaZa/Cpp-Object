#pragma once
#define _USE_MATH_DEFINES
#include <math.h>


class Rectangle
{
	int a = 0, b = 0;
public:
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};

class Triangle
{
	int a = 0, b = 0, c = 0;
public:
	void setDimensions(int x, int y, int z);
	double getField();
	double getCircuit();
};

class Circle
{
	int pi = M_PI;
	int r = 0;
public:
	void setDimensions(int rad);
	double getField();
	double getCircuit();

};