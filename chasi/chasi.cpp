#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n;
	std::cout << "vedite znacenie n: ";
	std::cin >> n;

	for (int i = n; i > 0; i--) {
		for (int k = n-i; k > 0; k--) {
			std::cout << "+";
		}
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int i = 2; i <= n; i++) {
		for (int k = n - i; k > 0; k--) {
			std::cout << "+";
		}
		for (int j = 0; j < i; j++) {

			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;

}
