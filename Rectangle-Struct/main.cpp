// Rectangle-Struct

//4.1. Zmień klasę Rectangle, by przyjmowała w konstruktorze dwa przeciwległe punkty jako struktury

#include <iostream>
#include"Rectangle.hpp"

int main()
{
    Rectangle rect1; // z konstruktora bezparametrowego
    rect1.setDimentions(14, 7);
    std::cout << "Area of the rect1 = " << rect1.area() << "; Perimeter of the rect1 = " << rect1.perimeter() << std::endl;

    Rectangle rect2(4, 5); // z konstruktora parametryzowanego
    std::cout << "Area of the rect2 = " << rect2.area() << "; Perimeter of the rect2 = " << rect2.perimeter() << std::endl;

    Point p1, p2;
    p1.x = 10;
    p1.y = 8;
    p2.x = 2;
    p2.y = 2;

    Rectangle rect3(p1, p2); //z parametrami ze struktury
    std::cout << "Area of the rect3 = " << rect3.area() << "; Perimeter of the rect3 = " << rect3.perimeter() << std::endl;

}