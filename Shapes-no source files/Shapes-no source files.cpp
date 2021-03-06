//Zamodeluj klasę Rectangle, Triangle, Circle, które pozwalaja na obliczenie obwodu i pola figury.

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

class Rectangle {
    int a = 0; //tu atrybuty
    int b = 0;

public: //tu funkcje 

    void setDim(int x, int y) //setter
    {
        a = x;
        b = y;
    }

    int perimeter() //getter
    {
        return (2 * a) + (2 * b);
    }

    int area() //getter
    {
        return (a * b);
    }

};


class Triangle {

    int a = 0;
    int b = 0;
    int c = 0;

public:

    //Triangle(int a, int b, int c) //konstruktor parametrowy
    //{
    //    this->a = a;
    //    this->b = b;
    //    this->c = c;
    //}

    void setDimTr(int x, int y, int z)
    {
        a = x;
        b = y,
        c = z;
    }

    int perimeterTr()
    {
        int per = 0;
        if ((a + b) > c && (b + c) > a && (a + c) > b)
            {
               per = a+b+c;
            }
        return per;
    }

    double areaTr()
    {
        double s = (a + b + c) / 2;
        double area = 0;
        if ((a + b) > c && (b + c) > a && (a + c) > b)
        {
            area = sqrt(s * (s - a) * (s - b) * (s - c));
        }
        return area;
    }
};

class Circle
{
    int pi = M_PI;
    int rad = 0;

public:
    void setDimC(int r)
    {
        rad = r;
    }

    int circumference(int r)
    {
       
        return (2 * pi * r);
    }

    int areaC(int r)
    {
        return pi * r * r;
    }

};


int main()
{
    Rectangle obj;
    obj.setDim(3, 4);
    obj.perimeter();
    obj.area();
    std::cout << "Perimeter of the rectangle = " << obj.perimeter() << std::endl;
    std::cout << "Area of the rectangle = " << obj.area() << std::endl;
    std::cout << std::endl;

    Rectangle obj2;
    int a = 0;
    int b = 0;
    std::cout << "Enter the first dimention: ";
    std::cin >> a;
    std::cout << "Enter the first dimention: ";
    std::cin >> b;
    obj2.setDim(a, b);
    std::cout << "Perimeter of the rectangle = " << obj2.perimeter() << std::endl;
    std::cout << "Area of the rectangle = " << obj2.area() << std::endl;
    std::cout << std::endl;

    Triangle objTr;
    objTr.setDimTr(3, 4, 5);
    objTr.perimeterTr();
    objTr.areaTr();
    std::cout << "Perimeter of the triangle = " << objTr.perimeterTr() << std::endl;
    std::cout << "Area of the triangle = " << objTr.areaTr() << std::endl;
    std::cout << std::endl;

    Circle objC;
    objC.setDimC(5);
    objC.circumference(5);
    objC.areaC(5);
    std::cout << "Circumference of the circle = " << objC.circumference(5) << std::endl;
    std::cout << "Area of the circle = " << objC.areaC(5) << std::endl;
    std::cout << std::endl;
}


//Wszytskie funkcjem ktore nie sa deklarowane wewanatrz klasy to funkcje zewnetrzne nalezacje jednka do niej. Deklarowane sa za pomoca podwojnego dwukropka;
//