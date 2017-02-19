/*
Tomya is a girl. She loves Chef Ciel very much.
Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p. 
The current menus of Ciel's restaurant are shown the following table.
-------------------------------------------------------
Name of Menu									price
-------------------------------------------------------
eel flavored water								  1
deep-fried eel bones							  2
clear soup made with eel livers					  4
grilled eel livers served with grated radish	  8
savory egg custard with eel						  16
eel fried rice (S)								  32
eel fried rice (L)								  64
grilled eel wrapped in cooked egg				  128
eel curry rice									  256
grilled eel over rice							  512
deluxe grilled eel over rice					  1024
eel full-course									  2048
-------------------------------------------------------
Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).

Since Tomya is a pretty girl, she cannot eat a lot. So please find the minimum number of menus whose total price is exactly p.
Note that if she orders the same menu twice, then it is considered as two menus are ordered. (See Explanations for details)

Input:
The first line contains an integer T, the number of test cases. Then T test cases follow. Each test case contains an integer p.
Output:
For each test case, print the minimum number of menus whose total price is exactly p.

Constraints:
1 ≤ T ≤ 5
1 ≤ p ≤ 100000 (105)
There exists combinations of menus whose total price is exactly p.
*/
#include<iostream>
#include<math.h>
#define NUMBER_OF_ITEMS 12

int main()
{
	int myMoney;
	std::cout << "Your budget: ";
	std::cin >> myMoney;
	int menu[NUMBER_OF_ITEMS];
	for (int i = 1; i <= NUMBER_OF_ITEMS; i++)
	{
		if (i == 1)
		{
			menu[i - 1] = 1;
			continue;
		}
		menu[i-1] = pow(2,(i-1));
	}
	//print array menu

	std::cout << "Prices: \n";
	for (int i = 0; i < NUMBER_OF_ITEMS; i++)
	{
		std::cout << menu[i]<<'\n';
	}

	int index = NUMBER_OF_ITEMS-1;
	int boughtProducts[NUMBER_OF_ITEMS];
	//initialize array
	for (int i = 0; i < NUMBER_OF_ITEMS; i++)
	{
		boughtProducts[i] = -1;
	}
	int myProductsCounter = 0;
	while (true && index!=-1)
	{
		if (menu[index] > myMoney)
		{
			index--;
			continue;
		}
		myMoney = myMoney - menu[index];
		boughtProducts[myProductsCounter] = myMoney;
		myProductsCounter++;
	}
	//my money after every bought item
	std::cout << "My money after buying \n";
	for (int i = 0; i <= NUMBER_OF_ITEMS; i++)
	{
		if (boughtProducts[i] >= 0)
		{
			std::cout << i + 1 << "-th product: ";
			std::cout << boughtProducts[i] << " $\n";
		}
	}
	std::cout << "Number of my products: ";
	std::cout << myProductsCounter <<'\n';
	return 0;
}