/*
https://www.codechef.com/problems/CARVANS
*/
#include<iostream>

int main()
{
	std::cout << "Enter number of cars: ";
	int numberOfCars;
	std::cin >> numberOfCars;
	int * circuit = new int[numberOfCars];
	for (int i = 0; i < numberOfCars; i++)
	{
		std::cout << "Enter maximum speed for " << i + 1 << "-th car:";
		int maxSpeed;
		std::cin >> maxSpeed;
		circuit[i] = maxSpeed;
	}
	for (int i = 0; i < numberOfCars; i++)
	{
		std::cout << circuit[i] << '\n';
	}
	int counter = 0;
	int currentMax = circuit[numberOfCars];
	for (int i = numberOfCars; i > 0; i--)
	{
		if (currentMax < circuit[i])
		{
			currentMax = circuit[i];
			counter++;
		}
		
	}
	counter = numberOfCars - counter;
	std::cout << counter << '\n';
	
	return 0;
}