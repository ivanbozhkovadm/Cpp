
/*
https://www.codechef.com/problems/SMPAIR
*/
#include<iostream>

int main()
{
	int const SIZE = 10;
	int arr[] = {1,3,7,6,2,5,4,19,0,0};
	
	int max = 0;
	int temp;
	for (int i = 0; i < SIZE; i++)
	{
		temp = arr[i] + arr[i + 1];
		if (max < temp)
		{
			max = temp;
		}
	}


	std::cout << max << '\n';

	return 0;
}