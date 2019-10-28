#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n;
	std::cout << "vedite znacenie n: ";
	std::cin >> n;

	for (int i = n; i-1 > 0; i-=2) {
		for (int k = n-i; k > 0; k-=2) {
			std::cout << " ";
		}
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i+=2) {//УПРАВЛЕНИЕ СТРОКАМИ
		for (int z = n-i; z > 2; z-=2) {
			std::cout << " ";
		}
		for (int j = 0; j <=i; j++) {

			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;

}
