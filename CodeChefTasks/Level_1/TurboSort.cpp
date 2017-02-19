/*
Given the list of numbers, you are to sort them in non decreasing order.
Input:
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]
Output:
Output given numbers in non decreasing order.
*/

#include<iostream>


int main()
{
	int numberOfNumbers,input;
	std::cout << "How many numbers you want to enter?\n";
	std::cin >> numberOfNumbers;
	int * arr = new int[numberOfNumbers];
	//int arr[5];
	for (int i = 0; i < numberOfNumbers; i++)
	{
		std::cout << "Input your " << i << " number: ";
		std::cin >> input;
		arr[i] = input;
	}
	for (int i = 0; i < numberOfNumbers; i++)
	{
		for (int j = i; j < numberOfNumbers; j++)
		{
			std::cout << "\n --enter in for J-- ";
			if ( arr[i] > arr[j])
			{
				std::cout << "\n --enter in IF-- ";
				int temp;
				temp =arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	std::cout << "Sorted numbers\n";
	for (int k = 0; k < numberOfNumbers; k++)
	{
		std::cout << arr[k] << ' ' ;
	}
	delete[] arr;
	return 0;
}