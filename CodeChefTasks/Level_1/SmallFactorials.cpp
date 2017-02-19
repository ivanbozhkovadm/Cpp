/*
You are asked to calculate factorials of some small positive integers.
Input:
An integer t, 1<=t<=100, denoting the number of testcases, 
followed by t lines, each containing a single integer n, 1<=n<=100.
Output:
For each integer n given at input, display a line with the value of n!
*/

#include<iostream>

int main()
{
	int input, numberOfInput,counter = 1;
	std::cout << "Number of inputs: ";
	std::cin >> numberOfInput;
	while(numberOfInput != 0)
	{ 
		int result = 1;
		std::cout << "Input number " << counter++ << " :";
		std::cin >> input;
			for (int i = input; i > 1; i--)
			{
				result = result*i;
			}
		std::cout << "Factorial from " << input << " is: ";
		std::cout << result << '\n';
		numberOfInput--;
	}
}