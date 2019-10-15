// Pryamaya.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
	int a, b, c;
    std::cout << "Privet";
	std::cout << "Vedite chislo a: " << std::endl;
	std::cin >> a;
	std::cout << "Vedite chislo b: " << std::endl;
	std::cin >> b;
	std::cout << "Vedite chislo c: " << std::endl;
	std::cin >> c;
	if (a>c)
	{
		std::cout << "C raspologaetsya pered A";
	}
	else if (a == c)
	{
		std::cout << "C raspologaetsya na A";
	}
	else if (b == c)
	{
		std::cout << "C raspologaetsya na B";
	}
	else if (b < c)
	{
		std::cout << "C  raspologaetsya posle B";
	}
	else 
	{
		std::cout << "C raspologaetsya mezhdu A i B";
	}
	return 0;

}
