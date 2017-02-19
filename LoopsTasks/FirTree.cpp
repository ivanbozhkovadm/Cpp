#include<iostream>

int main()
{
	int numberOfRows;
	std::cin >> numberOfRows;
	int numberOfDots = numberOfRows - 2;
	int lengthOfRow = numberOfDots * 2 + 1;
	int numberOfStars = 1;
	for (int row = 1; row < numberOfRows; row++)
	{
		int elementPosition = 1;
		while (elementPosition < lengthOfRow)
		{
			for (int dots = 0; dots < numberOfDots; dots++)
			{
				std::cout << '.';
				elementPosition++;
			}
			for (int stars = 0; stars < numberOfStars; stars++)
			{
				std::cout << '*';
				elementPosition++;
			}
			for (int dots = 0; dots < numberOfDots; dots++)
			{
				std::cout << '.';
				elementPosition++;
			}
			numberOfStars = numberOfStars + 2;
			numberOfDots = numberOfDots - 1;
		}
		
		std::cout << '\n';
	}
	
		for (int i = 0; i < numberOfRows - 2; i++)
		{
			std::cout << '.';
		}
		std::cout << '*';
		for (int i = 0; i < numberOfRows - 2; i++)
		{
			std::cout << '.';
		}

		std::cout << '\n';
	return 0;
}