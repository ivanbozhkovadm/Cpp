
/*
https://www.codechef.com/problems/FLOW018
*/

#include<iostream>

int main()
{
	int number;
	number = 5;
	for (int i = number-1; i > 0; i--)
	{
		number = number*i;
	}
	std::cout << number<<'\n';

	return 0;
}