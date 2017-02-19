/*
https://www.codechef.com/problems/CONFLIP
*/

#include<iostream>

int main()
{
	char headOrTail[2] = { 'H','T' };
	std::cout << "Please enter number of coins: ";
	int numberOfCoins;
	std::cin >> numberOfCoins;
	std::cout << "Please enter initial state - 1 for HEAD or 2 for TAIL: ";
	int initialState;
	std::cin >> initialState;
	char * engine= new char[numberOfCoins];
	bool isHead = false;
	if (initialState == 1)
	{
		isHead = true;
	}
	if (isHead)
	{
		for (int i = 0; i < numberOfCoins; i++)
		{
			engine[i] = 'H';
		}
	}
	else
	{
		for (int i = 0; i < numberOfCoins; i++)
		{
			engine[i] = 'T';
		}
	}
	int round = numberOfCoins;
	char answer[2] = { 'y','n' };
	int counter = 0;
	while (round > 0)
	{
		char yourAnswer;
		std::cout << "Do you want to flip"<< counter + 1 <<"-th coint?(y/n) ";
		std::cin >> yourAnswer;
		if (yourAnswer == 'y')
		{
			if (engine[counter] == 'H')
			{
				engine[counter] = 'T';
			}
			else
			{
				engine[counter] = 'H';
			}
			
		}
		counter++;
		round--;
	}
	int result = 0;
		for (int i = 0; i < numberOfCoins; i++)
		{
			if (engine[i] == headOrTail[initialState - 1])
			{
				result++;
			}
		}
		result = numberOfCoins - result;
		std::cout << "Number of fliped coins is: "<< result << '\n';
		delete[]engine;
	return 0;
}
