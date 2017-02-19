#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x;
	std::cin >> x;
	int y = x;
	int z = (x / 2) + 1;
	int width = 2 * (z + y) - 3;
	int hornDots = x / 2;
	int firstLineInnerDots = width - 2*z;
	//first line
		//left horns dots
	for (int i = 0; i < hornDots; i++)
	{
		cout << '.';
	}
	cout << '*';
		//inside part 
	for (int i = 0; i < firstLineInnerDots; i++)
	{
		cout << '.';
	}
	cout << '*';
		//right horn dots
	for (int i = 0; i < hornDots; i++)
	{
		cout << '.';
	}
	cout << '\n';
	//second part 
	int firstHornDots = z-2;
	int dotsAfterHorn = 0;
	int innerDots = firstLineInnerDots;
		//rows
	for (int row = 1; row < x - 1;row ++)
	{	
			//real left horns
		if (row <= x / 2)
		{
			for (int i = 0; i < firstHornDots; i++)
			{
				cout << '.';
			}
			cout << '*';
			for (int i = 0; i < dotsAfterHorn; i++)
			{
				cout << '.';
			}
			
		}
		else
		{
			for (int i = 0; i < hornDots; i++)
			{
				cout << '.';
			}
		}
			//left dots
		for (int i = 0; i < row; i++)
		{
			cout << '.';
		}
			//star
		cout << '*';
			//inner dots
		for (int i = 0; i < innerDots-2; i++)
		{
			cout << '.';
		}
		//star
		cout << '*';
		//right dots
		for (int i = 0; i < row; i++)
		{
			cout << '.';
		}
		//right horns dots
		
		if (row <= x / 2)
		{
			for (int i = 0; i < dotsAfterHorn; i++)
			{
				cout << '.';
			}
			cout << '*';
			for (int i = 0; i < firstHornDots; i++)
			{
				cout << '.';
			}
			firstHornDots--;
			dotsAfterHorn++;
		}
		else
		{
			for (int i = 0; i < hornDots; i++)
			{
				cout << '.';
			}
		}
			//decrease inner dots at every line 
		innerDots -= 2;
		cout << '\n';
	}
	//third part
	for (int i = 0; i < width/2; i++)
	{
		cout << '.';
	}
	cout << '*';
	for (int i = 0; i < width / 2; i++)
	{
		cout << '.';
	}
	cout << '\n';
	//forth part 
	int leftRightDotsInForthPart = x - 2;
	int numberOfInnerDots = 1;
	for (int row = 0; row < x-1; row++)
	{
			//left horn dots
		for (int  i = 0; i < hornDots; i++)
		{
			cout << '.';
		}
			//left dots
		for (int  i = 0; i < leftRightDotsInForthPart; i++)
		{
			cout << '.';
		}
		cout << '*';
			//inner dots
		for (int i = 0; i < numberOfInnerDots; i++)
		{
			cout << '.';
		}
		cout << '*';
			//right dots
		for (int i = 0; i < leftRightDotsInForthPart; i++)
		{
			cout << '.';
		}
		//right horn dots
		for (int i = 0; i < hornDots; i++)
		{
			cout << '.';
		}
		cout << '\n';
		numberOfInnerDots += 2;
		leftRightDotsInForthPart--;	
	}
	//fifth part 
	int innerDotsDownside = firstLineInnerDots;
	//rows
	for (int row = 1; row < x - 1; row++)
	{
		//left gorns dots
		for (int i = 0; i < hornDots; i++)
		{
			cout << '.';
		}
		//left dots
		for (int i = 0; i < row; i++)
		{
			cout << '.';
		}
		//star
		cout << '*';
		//inner dots
		for (int i = 0; i < innerDotsDownside - 2; i++)
		{
			cout << '.';
		}
		//star
		cout << '*';
		//right dots
		for (int i = 0; i < row; i++)
		{
			cout << '.';
		}
		//right horns dots
		for (int i = 0; i < hornDots; i++)
		{
			cout << '.';
		}
		//decrease inner dots at every line 
		innerDotsDownside -= 2;
		cout << '\n';
	}
	for (int i = 0; i < width / 2; i++)
	{
		cout << '.';
	}
	cout << '*';
	for (int i = 0; i < width / 2; i++)
	{
		cout << '.';
	}
	cout << '\n';
	return 0;
}