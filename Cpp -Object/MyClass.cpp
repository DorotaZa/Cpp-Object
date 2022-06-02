#include <iostream>
#include "MyClass.hpp"


	int MyClass::getVariable() { // getter zwaraca
		return variable;
	}

	void MyClass::setVariable(int param) {//setter ustawia wartosc w obiekcie
		variable = param;
	}
