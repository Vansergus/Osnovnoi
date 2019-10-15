
#include <iostream>
#include <string>


int main()
{
    int a, b, c;
    std::cout<<"vedite dva chisla: ";
	std::cin >> a >> b ;
	std::cout << "chislo 1= " << a << std::endl << "chislo 2= " << b << std::endl;
	c = a, a = b, b = c;
	std::cout << "chislo 1= " << a << std::endl << "chislo 2= " << b << std::endl;
    return 0;


}
