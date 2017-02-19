/*
Your program is to use the brute-force approach in order to find
the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. 
Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits.
*/

#include<iostream>

int main()
{
	int input = 0;
	while (true)
	{
		std::cout << "Please enter number: ";
		std::cin >> input;
		if (input == 42)
		{
			std::cout << "You found the answer of everything!\n";
			break;
		}
		std::cout << "You entered: " << input <<'\n';
	}
	return 0;
}