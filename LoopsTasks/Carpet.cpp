#include<iostream>

int main()
{
	int lines;
	std::cin >> lines;
	int elementsOnLine = lines;
	int center = elementsOnLine / 2;
	for (int row = 1; row <= lines /2; row++)
	{
		int elementPosition = 1;
		while (elementPosition <= elementsOnLine)
		{
			if ((elementPosition <= center - row) || (elementPosition >= center + row))
			{
				std::cout << '.';
				elementPosition++;
			}
			else
			{
				for (int innerElement = 0; innerElement < row; innerElement++)
				{
					if (innerElement % 2 == 0)
					{
						std::cout << '/';
						elementPosition++;
					}
					else
					{
						std::cout << ' ';
						elementPosition++;
					}
					
				}
				for (int innerElement = row; innerElement > 0; innerElement--)
				{
					if (innerElement % 2 != 0)
					{
						std::cout << '\\';
						elementPosition++;
					}
					else
					{
						std::cout << ' ';
						elementPosition++;
					}
				}
			}
		}
		std::cout << '\n';
	}
	for (int row = lines/2; row > 0; row--)
	{
		int elementPosition = 1;
		while (elementPosition <= elementsOnLine)
		{
			if ((elementPosition <= center - row) || (elementPosition >= center + row))
			{
				std::cout << '.';
				elementPosition++;
			}
			else
			{
				for (int innerElement = 0; innerElement < row ; innerElement++)
				{
					if (innerElement % 2 == 0)
					{
						std::cout << '\\';
						elementPosition++;
					}
					else
					{
						std::cout << ' ';
						elementPosition++;
					}
				}
				for (int  innerElement = row; innerElement > 0 ; innerElement--)
				{
					if (innerElement % 2 != 0)
					{
						std::cout << '/';
						elementPosition++;
					}
					else
					{
						std::cout << ' ';
						elementPosition++;
					}
				}
			}
		}
		std::cout << '\n';
	}
	return 0;
}