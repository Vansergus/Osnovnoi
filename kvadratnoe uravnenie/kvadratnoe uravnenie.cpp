// kvadratnoe uravnenie.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	float a, b, c, D, x1, x2, x;
	std::cout << "vedite a: ";
	std::cin >> a;
	std::cout << "vedite b: ";
	std::cin >> b;
	std::cout << "vedite c: ";
	std::cin >> c;
	D = b * b - 4 * a * c;
	std::cout << "Diskriminat raven " << D << std::endl;
	if (D < 0) {
		std::cout << "ne imet kornei";
	}
	else if (D == 0) {
		std::cout << "imet odin koren";
		x = -b / 2 * a;
		std::cout << x;
    }
	else if (D > 0) {
		std::cout << "imet dva kornya" << std::endl;
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		std::cout << "x1= " << x1 << std::endl << "x2= " << x2 << std::endl;

	}
	return 0;
}
//{
//	int a, c, x;
//	std::cout << "vedite a i b";
//	std::cin >> a >> c;
//	x =-a + c;
//	std::cout << x;
//
//}