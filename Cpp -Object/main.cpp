#include <iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"


int main() {

	
	MyClass o1, o2; //object
	o1.setVariable(16);
	int value = o1.getVariable();
	int value2 = o2.getVariable();
	std::cout << value << "; " << value2 << std::endl;
	std::cout << std::endl;
	
	Rectangle rect;
	std::cout << "Rectangle: " << std::endl;
	rect.setDimensions(3, 7);
	std::cout << rect.getField() << "; " << rect.getCircuit() << std::endl;
	std::cout << std::endl;

	//pobrac wartosc z cina jako zadanie domowe
	Rectangle rectUser;
	int a = 0;
	int b = 0;
	std::cout << "Enter a side: " << std::endl;
	std::cin >> a;
	std::cout << "Enter b side: " <<std::endl;
	std::cin >> b;
	rectUser.setDimensions(a, b);
	std::cout << "Rectangle from the user: " << std::endl;
	std::cout << rectUser.getField() << "; " << rectUser.getCircuit() << std::endl;
	std::cout << std::endl;

	Triangle triangle;
	std::cout << "Triangle: " << std::endl;
	triangle.setDimensions(3, 4 ,5);
	std::cout << triangle.getField() << "; " << triangle.getCircuit() << std::endl;
	std::cout << std::endl;

	Circle circle;
	std::cout << "Circle: " << std::endl;
	circle.setDimensions(2);
	std::cout << circle.getField() << "; " << circle.getCircuit() << std::endl;
	std::cout << std::endl;

	//Account prv;
	//prv.deposit(150);
	//std::cout << prv.GetBalance() << std::endl;
	//int cash = prv.withdraw(100);
	//std::cout << prv.GetBalance() << std::endl;
	//cash = prv.withdraw(100);
	//std::cout << prv.GetBalance() << " " << std::endl;

}
