// rebusi for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int z, n;
	std::cout << "vedite cislo: ";
	std::cin >> n;
	for (int i = n; i > 0; i--)
		std::cout << i << std::endl;
	z = n + 1;
	for (int i = 2; i <= n; i++)
			std::cout << i << std::endl;
	return 0;
}