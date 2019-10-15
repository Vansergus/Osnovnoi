// Pryamougolnik.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
	int x, y, w, h, u, v;
	std::cout << "Wedite  x  : ";
	std::cin >> x;
	std::cout << "Wedite y : ";
	std::cin >> y;
	std::cout << "Wedite dlinu (w):  ";
	std::cin >> w;
	std::cout << "Wedite Shirinu (h): ";
	std::cin >> h;
	std::cout << "wedite tochki proverki x i y";
	std::cin >> u >> v;
	if ((u > x) && (u < (x + w)) && (v < (y - h))) {
		std::cout << "wnutri";
	}
	else if ((v > y) || (u < x) || (u > (x + w)) || (v < (y - h))) {
		std::cout << "snaruzhi";

	}

	return 0;
}
































	//if (q < a && b > q)
	//{
	//	std::cout << "Vnutri pryamougolnika";
	//}
	//else if (z > d && z < c) 
	//{
	//std::cout << "Tocka vnutri pryamougolnika";
 //   }
	//else 
	//{
	//	std::cout << "Tochka vne pryamougolnika";
	//}
	//return 0;
	//if (q > a && b < q) {
	//	std::cout << "snaruzhi";
	//}
	//else if (z<d && z>c) {
	//	std::cout << "snaruzhi";
	//}
	//else {
	//	std::cout << "vnutri";
	//}
	//return 0;






