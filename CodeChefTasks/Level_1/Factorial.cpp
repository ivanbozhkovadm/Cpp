#include<iostream>
#include<string>
unsigned long long int factorial(int number)
{
	unsigned long long int result = number;
	for (int i = number-1; i >= 1; i--)
	{
		result = result * i;
	}
	return result;
}

int check(unsigned long long int number)
{
	int counter = 0;
	while (number % 10 == 0)
	{
		++counter;
		number = number / 10;
	}
	return counter;
}

int main()
{
	int number = 10;
	std::cout << factorial(number) <<'\n';
	std::cout << check(factorial(number));

	std::cout << "\n";
	return 0;
}