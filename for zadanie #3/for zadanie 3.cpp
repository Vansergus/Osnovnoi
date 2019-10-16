
#include <iostream>
#include <string>
#include <math.h>


int main()
{
	int z, n;
	std::cout << "vedite cislo: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cout << i;
		if ( i < n) {
			std::cout << ",";
		}
	
	}
	return 0;
}

