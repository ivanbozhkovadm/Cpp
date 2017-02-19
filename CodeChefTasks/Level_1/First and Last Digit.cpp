/*
https://www.codechef.com/problems/FLOW004
*/

#include<iostream>

int main()
{
	int firstDigit, lastDigit, number,digitCounter = 0,previousDigit;
	std::cin >> number;
	int tempNumber = number;
	while (tempNumber != 0)
	{
		previousDigit = tempNumber;
		tempNumber = tempNumber / 10;
		digitCounter++;
	}
	lastDigit = number % 10;
	firstDigit = previousDigit;

	std::cout << firstDigit*lastDigit << '\n';

	return 0;
}