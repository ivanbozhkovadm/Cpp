#include<iostream>

int greatestCommonDivisor(int a,int b)
{
	int result = 1;
	while (result != 0)
	{
		result = a % b;
		a = b;
		b = result;
	}
	return a;
}

int main()
{
	int numberOfTests;
	std::cout << "Please, enter number of tests: ";
	std::cin >> numberOfTests;
	while (numberOfTests != 0)
	{
		std::cout << "Please, enter number of products: ";
		int numberOfProducts;
		std::cin >> numberOfProducts;
		numberOfProducts = numberOfProducts + 2;
		int * arr = new int[numberOfProducts];
		int counter = 0;
		arr[0] = NULL;
		arr[1] = NULL;
		for (int i = 2; i < numberOfProducts; i++)
		{
			std::cout << "Please, enter quantity for the "<<i-1<<"-th product: ";
			std::cin >> arr[i];
		}
		while (counter != numberOfProducts - 1)
		{
			arr[0] = greatestCommonDivisor(arr[2], arr[3]);
			arr[1] = arr[counter + 2];
			counter++;
		}
		std::cout<<"One part from new product must be 1/" << arr[0] << " from the old product!\n";
		for (int i = 2; i < numberOfProducts; i++)
		{
			arr[i] = arr[i] / arr[0];
			std::cout << "New quantity for "<<i-1<<"-th product is: " <<arr[i]<<'\n';
		}
		
		delete[]arr;
		numberOfTests--;
	}
	return 0;
}