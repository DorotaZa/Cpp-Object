#include "Rectangle.hpp"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Point ur, Point ll)
{
	int width = (ur.x - ll.x);
	int height = (ur.y - ll.y);

	this -> a = width;
	this -> b = height;
}

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

void Rectangle::setDimentions(int x, int y)
{
	a = x;
	b = y;
}

int Rectangle::area()
{
	return a * b;
}

int Rectangle::perimeter()
{
	return (2 * a) + (2 * b);
}