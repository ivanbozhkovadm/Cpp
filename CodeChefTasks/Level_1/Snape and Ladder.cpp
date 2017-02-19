/*
https://www.codechef.com/problems/SNAPE
*/

#include<iostream>
#include<math.h>

double min(int b, int ls)
{
	return std::sqrt(ls*ls - b*b);
}

double max(int b, int ls)
{
	return sqrt(ls*ls + b*b);
}

int main()
{
	int numberOfTests;
	std::cout << "Enter number of tests: ";
	std::cin >> numberOfTests;
	while (numberOfTests!=0)
	{
		int b, ls;
		std::cout << "Enter B: ";
		std::cin >> b;
		std::cout << "Enter LS: ";
		std::cin >> ls;
		std::cout << "MIN RS is: ";
		std::cout << min(b, ls) << ' ';
		std::cout << "MAX RS is: ";
		std::cout << max(b, ls) << '\n';
		numberOfTests--;
	}
	return 0;
}