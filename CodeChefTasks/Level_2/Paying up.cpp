/*
https://www.codechef.com/problems/MARCHA1	
*/
#include<iostream>

int main()
{
	std::cout << "Enter number of your banknotes: ";
	int numberOfMyBanknotes;
	std::cin >> numberOfMyBanknotes;
	std::cout << "Enter amount of money that muggers asked: \n";
	int amountOfMoneyMuggersAsked;
	std::cin >> amountOfMoneyMuggersAsked;
	int * valueOfMyBanknotes = new int[numberOfMyBanknotes];
	std::cout << "Enter value for each banknote. \n";
	for (int i = 0; i < numberOfMyBanknotes; i++)
	{
		int value;
		std::cout << "Enter value for your " << i + 1 << "-th banknote: ";
		std::cin >> value;
		valueOfMyBanknotes[i] = value;
	}

	for (int i = 0; i < numberOfMyBanknotes; i++)
	{
		while (amountOfMoneyMuggersAsked >= valueOfMyBanknotes[i])
		{
			amountOfMoneyMuggersAsked = amountOfMoneyMuggersAsked - valueOfMyBanknotes[i];
		}
	}

	std::cout << amountOfMoneyMuggersAsked<<'\n';

	if (amountOfMoneyMuggersAsked == 0)
	{
		std::cout << "Yes!\n";
	}
	else
	{
		std::cout << "No!\n";
	}
	return 0;
}