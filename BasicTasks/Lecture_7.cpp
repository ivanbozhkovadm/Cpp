#include<iostream>

void CountingSort(int arr[], const int SIZE)
{
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	//define length of counterArray
	int length = max-min + 1;
	//creating array
	int * counterArray = new int[max];
	for (int i = 0; i < length; i++)
	{
		counterArray[i] = 0;
	}
	//core
	for (int i = 0; i < SIZE; i++)
	{
		int element = arr[i] - min;
		counterArray[element]++;
	}
	//print counterArray
	for (int i = 0; i < length; i++)
	{
		std::cout << i << ':' << counterArray[i] << '\n';
	}
	//print sorted array
	std::cout << "Sorted array:\n";
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < counterArray[i]; j++)
		{
			std::cout << (i+min) << ' ';
		}
	}
	std::cout << '\n';

}
void BubbleSort(int arr[],const int SIZE)
{
	for (int j = 1; j < SIZE + 1; j++)
	{
		bool isSorted = true;
		for (int i = 0; i < SIZE - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = temp;
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				isSorted = false;
			}
		}
		if (isSorted == true)
		{
			break;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	
}
void SelectionSort(int arr[], const int SIZE)
{
	/*
	for (int i = 0; i < SIZE; i++)
	{
		int min = arr[i];
		int numberOfElement;
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				min = arr[j];
				numberOfElement = j;
			}
		}
		int temp;
		temp = arr[i];
		arr[i] = min;
		arr[numberOfElement] = temp;

	}
	
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	*/
}
int partition(int arr[], const int SIZE, int l, int r)
{
	int pivot = arr[r];
	int k = l - 1;
	for (int i = l; i <= r; i++)
	{
		if (arr[i] <= pivot)
		{
			k++;
			int temp;
			temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
		}
	}
	return k;
}
void quickSort(int arr[], const int SIZE, int l, int r)
{
	if (r <= l)
	{
		return;
	}
	int pivot = partition(arr,SIZE,l,r);
	quickSort(arr, SIZE, l, pivot - 1);
	quickSort(arr, SIZE, pivot + 1, r);


	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}
void binarySearch(int arr[], const int SIZE, int number)
{
	int l = 0;
	int r = SIZE;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (arr[m] == number)
		{
			std::cout <<"Position: "<< m + 1 << '\n';
			break;
		}
		if (arr[m] > number)
		{
			r = m - 1;
		}
		if(arr[m] < number)
		{
			l = m + 1;
		}
	}

}
int main()
{
	const int SIZE = 10;
	//int arr[SIZE] = { 9,55,2,22,5,0,-2,7,1,4 };
	//int arr[SIZE] = { 1,1,0,1,0,1,2,-1,-1,2 };
	//partition2(arr,SIZE,0,6);
	int arr[SIZE] = { 0,1,2,3,4,5,10,11,12,13 };
	binarySearch(arr, SIZE, 12);
	return 0;
}