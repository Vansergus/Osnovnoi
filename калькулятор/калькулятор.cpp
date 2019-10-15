// калькулятор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int a, b, c;
	std::cout<<"vedite pervoe chislo: ";
	std::cin >> a;
	std::cout << "vedite vtoroe chislo: ";
	std::cin >> b;
	std::cout << "Viberite operaciyu gde: " << std::endl;
	std::cout << "1. Eto (clozhenie)" << std::endl;
	std::cout << "2. Eto (vichitanie)" << std::endl;
	std::cout << "3. Eto (umnozhenie)" << std::endl;
	std::cout << "4. Eto (delenie)" << std::endl;
	std::cin >> c;
	switch (c)
	{
	case(1):
		std::cout << "otvet: " << a + b;
		break;
	case(2):
		std::cout << "otvet: " << a - b;
		break;
	case(3):
		std::cout << "otvet: " << a * b;
		break;
	case(4):
		std::cout << "otvet: " << (float)a / b;
		break;
	default:
		std::cout << "nevernoe znacenie ";
		break;
   }
	return 0;

}


