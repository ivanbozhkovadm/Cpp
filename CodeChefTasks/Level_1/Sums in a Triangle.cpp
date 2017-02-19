#include<iostream>


int main()
{
	int numberOfRows,sum = 0;
	std::cin >> numberOfRows;
	int ** arr = new int*[numberOfRows];
	int sumArr[100];
	for (int i = 0; i < numberOfRows; i++)
	{
		arr[i] = new int[i];
			for( int j = 0; j < i; j++)
			{
				std::cin >> arr[i][j];
			}
	}
	for (int i = 0; i < numberOfRows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
	int counter = 0;
	for (int i = 0; i < numberOfRows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			//TO DO
			//add elements that not exists in sumArr at the end
			for (int k = 0; k < 100; k++)
			{
				int elementOfArr = arr[i][j];
				if (arr[i][j] == sumArr[k])
				{
					int elementOfSumArr = sumArr[k];
					continue;
				}
				else
				{
					int elementOfSumArr = sumArr[k];
					sumArr[counter] = arr[i][j];
					counter++;
					break;
				}
			}

		}
		std::cout << '\n';
	}
	
	for(int i = 0; i < 10; i++)
	{
		std::cout << sumArr[i] << ' ';
	}
	std::cout<<'\n' << sum;
	
	for (int i = 0; i < numberOfRows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	return 0;
}