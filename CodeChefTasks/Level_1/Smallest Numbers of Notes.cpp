#include<iostream>


int main()
{
	int myMoney = 1200;
	int denominationsArr[6] = { 1,2,5,10,50,100	};
	int elementCounter = 5;
	int smallestNumberOfNotes = 0;
	while (myMoney > 0)
	{
		if (myMoney - denominationsArr[elementCounter] >= 0)
		{
			myMoney = myMoney - denominationsArr[elementCounter];
			smallestNumberOfNotes++;
		}
		else
		{
			elementCounter--;
		}
	}
	std::cout << smallestNumberOfNotes << '\n';
	return 0;
}