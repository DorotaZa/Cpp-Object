#pragma once
#include <corecrt_math_defines.h>


class Rectangle
{
	int a = 0, b = 0;
public:
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};


//class Triangle
//{
//	int a = 0, b = 0; c = 0; d = 0;
//public:
//	void setDimensions(int x, int y, int z, int h);
//	int getField();
//	int getCircuit();
//};

class Circle
{
	int pi = M_PI;
	int r = 0;
public:
	void setDimensions(int rad);
	int getField();
	int getCircuit();

};