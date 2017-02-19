/*
https://www.codechef.com/problems/FLOW007
*/

#include<iostream>

int main()
{
	int number,newNumber = 0, lastDigit, digitCounter = 0;
	std::cin >> number;
	int tempNumber = number;
	while(tempNumber != 0)
	{
		tempNumber = tempNumber / 10;
		digitCounter++;
	}
	
	while (digitCounter!=0)
	{
		lastDigit = number % 10;
		number = number / 10;
		newNumber = newNumber * 10 + lastDigit;
		digitCounter--;
	}
	std::cout << newNumber;

	return 0;
}