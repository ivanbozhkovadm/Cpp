/*
https://www.codechef.com/problems/FLOW017
*/

#include<iostream>

int main()
{
	
	int arraySize;
	std::cout << "Number of numbers: ";
	std::cin >> arraySize;
	int * arr = new int[arraySize];
	int secondLargest,min = 0;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Enter " << i + 1 << "-th element: ";
		std::cin >> arr[i];
	}
	for (int i = 0; i < arraySize; i++)
	{
		if (arr[i] > min)
		{
			secondLargest = min;
			min = arr[i];
		}
	}
	std::cout << "Second largest: ";
	std::cout << secondLargest<<'\n';
	delete[] arr;
	return 0;
}