// Opredeleni chet i ne chet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
	int a;
    std::cout << "Privet"<<std::endl;
	std::cout << "Vedite chislo: "<<std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Chetnoe!";
	} 
	else
		std::cout << "Nechetnoe";
	 
	return 0;



}