/*
https://www.codechef.com/problems/REMISS
*/
#include <iostream>

int main()
{

	int numberOfTests;
	std::cout << "Please enter number of tests: ";
	std::cin >> numberOfTests;
	while (numberOfTests != 0)
	{
		int firstGuard, secondGuard;
		std::cout << "First guard: ";
		std::cin >> firstGuard;
		std::cout << "Second guard: ";
		std::cin >> secondGuard;
		std::cout << "Minimum number of times is: " << firstGuard << '\n';
		std::cout << "Maximum number of times is: " << firstGuard + secondGuard << '\n';
		numberOfTests--;
	}
	return 0;
}