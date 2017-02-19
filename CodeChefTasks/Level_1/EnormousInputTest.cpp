/*
Input:
The input begins with two positive integers n k (n, k<=10^7). 
The next n lines of input contain one positive integer ti, not greater than 109, each.

Output:
Write a single integer to output, denoting how many integers ti are divisible by k.
*/


#include<iostream>

int main()
{
	long int numberOfInputs, divisor, input = 0, counter = 0;
	std::cout << "Enter number of inputs: \n";
	std::cin >> numberOfInputs;
	std::cout << "Enter divisor: \n";
	std::cin >> divisor;
	std::cout << "Enter your numbers: \n";
	for (int i = 0; i < numberOfInputs; i++)
	{
		std::cout << "Enter number " << i+1 << ": ";
		std::cin >> input;
		if (input % divisor == 0)
		{
			counter++;
		}
	}
	std::cout << "There are " << counter << " numbers with divisor "<<divisor<<'\n';
	return 0;
}