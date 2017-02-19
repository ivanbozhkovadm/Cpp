/*
https://www.codechef.com/problems/HORSES
*/
#include<iostream>
#include<math.h>

int main()
{
	int numberOfHorses;
	std::cin >> numberOfHorses;
	int * arrOfHorses = new int[numberOfHorses];

	for (int i = 0; i < numberOfHorses; i++)
	{
		int skillValue;
		std::cin >> skillValue;
		arrOfHorses[i] = skillValue;
	}
	int difference;
	int min = 100;
	for (int i = 0; i < numberOfHorses; i++)
	{
		for (int j = 0; j < numberOfHorses; j++)
		{
			if (i == j)
			{
				continue;
			}
			difference = abs(arrOfHorses[i] - arrOfHorses[j]);
			if (difference < min)
			{
				min = difference;
			}
		}
		
	}
	std::cout << min;
	return 0;
}