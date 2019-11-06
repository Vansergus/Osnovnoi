#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n;
    std::cout << "vedite chislo ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			/*if (i==n-j-1||i==j)*/
			/*if (n-i-1<=j&&i<=j||j<=i&&n-i>j)*/
			if(i<=j&&n-i>j||j<=i&&j>n-i-2){
				std::cout << "*";
			}
			else {
				std::cout << "-";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}

