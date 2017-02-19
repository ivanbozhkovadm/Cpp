/*
https://www.codechef.com/problems/LAPIN
*/

#include<iostream>
#include<string>
int main()
{
	std::cout << "Please, enter your string: ";
	std::string input;
	std::cin >> input;
	
	int stringSize = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		stringSize++;
	}
	int halfStringSize = stringSize/2;
	char * firstPart = new char[halfStringSize];
	char * secondPart = new char[halfStringSize];
	
		for (int i = 0; i < halfStringSize; i++)
		{
			firstPart[i] = input[i];
		}
		int inputCounter;
		if(stringSize % 2 == 0)
		{
			inputCounter = halfStringSize;
		}
		else
		{
			inputCounter = halfStringSize + 1;
			
		}
		for (int i = 0; inputCounter < stringSize; i++)
		{
			secondPart[i] = input[inputCounter];
			inputCounter++;
		}
		//print first part
		for (int i = 0; i < halfStringSize; i++)
		{
			std::cout << firstPart[i] <<" ";
		}
		std::cout << "\n";
		//print second part
		for (int i = 0; i < halfStringSize; i++)
		{
			std::cout << secondPart[i] << " ";
		}
	int counter = 0;
	for (int i = 0; i < halfStringSize; i++)
	{
		if (firstPart[i] == secondPart[i])
		{
			counter++;
		}
	}

	if (counter == halfStringSize)
	{
		std::cout << input << " is lapindrom";
	}
	else
	{
		std::cout << input << " is not lapindrome";
	}

	return 0;
}