#pragma once

struct Point
{
	int x,y;
};

class Rectangle 
{
	int a = 0, b = 0;

public: 
	Rectangle(); //konstruktor bezargumentowy/bezparametrowy
	Rectangle(int a, int b); //kontruktor parametrowy 
	Rectangle(Point ur, Point ll); //Konstruktor z parametrem ze struktury; upper-right, lower-left
	void setDimentions (int x, int y); //setter na a i b
	int perimeter();
	int area();
};