#include<iostream>

void task_0_1()
{
	/*
	Напишете програма, която проверява дали в масив от цели
числа всички числа са неотрицателни.
	*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = { { 11,12,13,14,15,16, },
	{ 21,22,23,24,25,26, },
	{ 31,32,33,34,35,36, },
	{ 41,42,43,44,45,46, },
	{ 51,52,53,54,55,56, },
	{ 61,62,63,64,65,66 }
	};
	bool isNegative = false;
	for (int row = 0; row < HEIGHT; row++)
	{
		for (int col = 0; col < WIDTH; col++)
		{
			if (arr[row][col] < 0)
			{
				isNegative = true;
			}
		}
	}
	if (isNegative == false)
	{
		std::cout << "Numbers are positive\n";
	}
	else
	{
		std::cout << "There is one ore more negative numbers\n";
	}
}
void task_0_2()
{
	/*
	Едномерен масив наричаме назъбен, ако всеки елемент в
масива е > от предишния и < от следващия. Напишете
програма, която проверява дали даден масив от числа е
назъбен.
	*/
	int rows, columns;
	std::cin >> rows >> columns;

	int ** arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			std::cin >> arr[row][column];
		}
	}
	bool isUpAndDown = true;
	for (int row = 0; row < rows; row++)
	{
		if (isUpAndDown == false)
		{
			break;
		}
		for (int column = 0; column < columns - 2; column+=2)
		{
			if ((arr[row][column] < arr[row][column + 1]) && (arr[row][column + 1] > arr[row][column + 2]))
			{
				isUpAndDown = true;
			}
			else
			{
				isUpAndDown = false;
				break;
			}
		}
	}

	if (isUpAndDown == true)
	{
		std::cout << "The array is up and down\n";
	}
	else
	{
		std::cout << "The array is NOT up and down\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[] arr;
}
void task_0_3()
{
	/*
	Напишете програма, която за даден масив от символи arr и
символ ch, въведен от потребителя, проверява али arr съдържа
ch. Ако се съдържа, отпечатайте индекса на елемента. Ако не,
отпечатайте подходящо избрана от вас стойност.
	*/
	
	int rows, columns;
	char ch;
	std::cin >> rows >> columns >> ch;

	char ** arr = new char *[rows];
	for (int i = 0; i < columns; i++)
	{
		arr[i] = new char[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] == ch)
			{
				std::cout << "INDEX: " << i+1<<',' << j+1 << '\n';
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[] arr;
}
void task_0_4()
{
	/*
	Напишете програма, която сортира (подрежда елементите във
възходящ ред) масив, съдържащ само 0 и 1.
*/
	int arr[] = { 0,0,1,1,0,1,0,1,1,1,0,1,1,0,1 };
	int length = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Original array: ";
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ' ';
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (arr[i] ^ 1)
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
	}
	std::cout << "\nSorted array:   ";
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}
void task_0_5()
{
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {	{ 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,36, },
								{ 41,42,43,44,45,46, },
								{ 51,52,53,54,55,56, },
								{ 61,62,63,64,65,66  }
							};
	int maxSum = 0;
	for (int i = 0; i < HEIGHT; i++)
	{
		int sum = 0;
		for (int j = 0; j < WIDTH; j++)
		{
			sum += arr[i][j];
		}
		
		if (maxSum < sum)
		{
			maxSum = sum;
		}
	}
	std::cout << "MAX sum is: " << maxSum << '\n';

}
void task_0_6()
{
	/*
	Напишете програма, която за дадена матрица от символи
отпечатва на екрана елементите, които се намират на главния
диагонал.
*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {  { 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,36, },
								{ 41,42,43,44,45,46, },
								{ 51,52,53,54,55,56, },
								{ 61,62,63,64,65,66  }
							};
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (i == j)
			{
				std::cout << arr[i][j] << ' ';
			}
		}
	}
}
void task_0_7()
{
	/*
	Напишете програма, която за дадена матрица намира
произведението на елементите под главния диагонал.
	*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {	{ 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,36, },
								{ 41,42,43,44,45,46, },
								{ 51,52,53,54,55,56, },
								{ 61,62,63,64,65,66 }
							};
	int product = 1;
	for (int i = 0; i < HEIGHT ; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			product = product * arr[i][j];
		}
	}
	std::cout << "Product: " << product << '\n';
}
void task_0_8()
{
	/*
	Напишете програма, която за матрица от булеви стойности,
проверява дали се съдържа елемент със стойност true над
втория диагонал.
	*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	bool arr[HEIGHT][WIDTH] = { { false,false,false,false,false,false, },
								{ false,false,false,false,true,false, },
								{ false,false,false,false,false,false, },
								{ false,false,false,false,false,false, },
								{ false,false,false,false,false,false, },
								{ false,false,false,false,false,false, }
							};
	bool flag = true;
	for (int i = 0; i < HEIGHT; i++)
	{
		if (flag == false)
		{
			std::cout << "There is TRUE\n";
			break;
		}
		for (int j = 0; j < WIDTH; j++)
		{
			
			if ( (i < j) && (arr[i][j] == true) )
			{
				flag = false;
				break;
			}
		}
	}
	if (flag == true)
	{
		std::cout << "There isn`t TRUE\n";
	}

}
void task_0_9()
{
	/*
	Дадена е правоъ­гълна матрица с числа. Да се намери в нея
максималната подмат­рица с размер 2 х 2 и да се отпечата на
конзолата. Под максимална подматрица се разбира
подматрица, която има максимална сума на елементите, които я
съставят.
	*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {	{ 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,36, },
								{ 41,42,43,44,45,46, },
								{ 51,52,53,54,55,56, },
								{ 61,62,63,64,65,66 }
							};
	int maxSum = 0;
	const int maxElements = 4;
	int maxSumElements[maxElements];
	for (int i = 0; i < HEIGHT - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j < WIDTH - 1; j++)
		{
			sum = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1];
			if (sum > maxSum)
			{
				maxSum = sum;
				maxSumElements[0] = arr[i][j];
				maxSumElements[1] = arr[i][j + 1];
				maxSumElements[2] = arr[i + 1][j];
				maxSumElements[3] = arr[i + 1][j + 1];
			}
		}
	}
	for (int i = 0; i < maxElements; i++)
	{
		std::cout << maxSumElements[i] << ' ';
		if (i == 1)
		{
			std::cout << '\n';
		}
	}
}
void task_0_10()
{
	/*
	Напишете програма, която намира най-често срещания елемент
в масив. 
*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {	{ 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,22, },
								{ 44,44,44,44,44,46, },
								{ 51,52,22,54,55,56, },
								{ 61,62,63,64,65,66 }
							};
	int maxCounter = 0;
	int maxElement;
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			int counter = 0;
			for (int m = 0; m < HEIGHT; m++)
			{
				for (int n = 0; n < WIDTH; n++)
				{
					if (arr[i][j] == arr[m][n])
					{
						counter++;
					}
					if (counter > maxCounter)
					{
						maxElement = arr[i][j];
						maxCounter = counter;
					}
				}
			}
		}
	}
	std::cout << "Max element: " << maxElement << '\n' << "Repeating " << maxCounter << " times." << '\n';
}
void task_0_11()
{
	/*
	Да се напише програма която изисква от потребителя да въведе
2 числа n и m. След това да се построи матрица с размер n x m 
	*/
	int height, width;
	std::cout << "Enter HEIGHT and WIDTH: ";
	std::cin >> height >> width;

	int ** arr = new int*[height];
	for (int i = 0; i < height; i++)
	{
		arr[i] = new int[width];
	}

	int counter = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			counter++;
			std::cout << counter << ' ';
		}
		std::cout << '\n';
	}
	for (int i = 0; i < height; i++)
	{
		delete arr[i];
	}
	delete[] arr;
	std::cout << "----------------------------\n";
	int ** arr2 = new int*[height];
	for (int i = 0; i < height; i++)
	{
		arr2[i] = new int[width];
	}
	counter = 0;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			counter++;
			arr2[j][i] = counter;
		}
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << arr2[i][j] << ' ';
		}
		std::cout << '\n';
	}
	for (int i = 0; i < height; i++)
	{
		delete arr2[i];
	}
	delete[] arr2;
	std::cout << "----------------------------\n";
	int ** arr3 = new int*[height];
	for (int i = 0; i < height; i++)
	{
		arr3[i] = new int[width];
	}
	counter = 0;
	for (int i = 0; i < width; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = height-1; j >= 0; j--)
			{
				counter++;
				arr3[j][i] = counter;
			}
		}
		else
		{
			for (int j = 0; j < height; j++)
			{
				counter++;
				arr3[j][i] = counter;
			}
		}
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << arr3[i][j] << ' ';
		}
		std::cout << '\n';
	}

	for (int i = 0; i < height; i++)
	{
		delete arr3[i];
	}
	delete[] arr3;
	std::cout << "----------------------------\n";	
	int ** arr4 = new int*[height];
	for (int i = 0; i < height; i++)
	{
		arr4[i] = new int[width];
	}
	counter = 1;
	for (int row = 0; row < height; row++)
	{
		int r = row;
		int c = 0;

		while (r>=0 && c < width)
		{
			arr4[r][c] = counter;
			r--;
			c++;
			counter++;
		}
	}
	for (int col = 1; col < width; col++)
	{
		int r = height - 1;
		int c = col;

		while (r >= 0 && c < width)
		{
			arr4[r][c] = counter;
			r--;
			c++;
			counter++;
		}
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << arr4[i][j] << ' ';
		}
		std::cout << '\n';	
	}
	
	for (int i = 0; i < height; i++)
	{
		delete arr4[i];
	}
	delete[] arr4;
	
}
void task_1()
{
	const int HEIGHT = 6;
	const int WIDTH = 5;

	int arr[HEIGHT][WIDTH] = {  { 48,72,13,14,15 },
								{ 21,22,53,24,75 }, 
								{ 31,57,33,34,35 }, 
								{ 41,95,43,44,45 }, 
								{ 59,52,53,54,55 }, 
								{ 61,69,63,64,65 } 
							};
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
			if (arr[i][j] > max )
			{
				max = arr[i][j];
			}
		}
	}
	std::cout << "MIN: " << min << '\n' << "MAX: " << max << '\n';
}
void task_2()
{
	int height, width;
	std::cin >> height >> width;
	//initialization
	int ** arr = new int *[height];
	for (int i = 0; i < height; i++)
	{
		arr[i] = new int[width];
	}
	//input
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	//print diagonals
		//left - to - right
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == j)
			{
				std::cout << arr[i][j] << ' ';
			}
		}
	}
	std::cout << '\n';
		//right - to - left
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == (width - i))
			{
				std::cout << arr[i][j] << ' ';
			}
		}
	}
	
	//clean memory 
	for (int i = 0; i < height; i++)
	{
		delete [i]arr;
	}
	delete[] arr;
}
void task_3()
{
	/*
	Имате двумерен масив от числа, чийто стойности са въведени
предварително. Да се отпечатат сумата на елементите на масива,
както и средноаритметичното на тези числа.
	*/
	const int HEIGHT = 6;
	const int WIDTH = 5;

	int arr[HEIGHT][WIDTH] = { { 48,72,13,14,15 },
							   { 21,22,53,24,75 },
							   { 31,57,33,34,35 },
							   { 41,95,43,44,45 },
							   { 59,52,53,54,55 },
							   { 61,69,63,64,65 }
							};

	int sum = 0;
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	int avarage = sum / (HEIGHT * WIDTH);

	std::cout << "SUM: " << sum << '\n' << "AVARAGE: " << avarage << '\n';

}
void task_4()
{
	/*
	Имате предварително въведени стойности на елементи в двумерен
масив - естествени числа.
Да се състави програма, чрез която се извеждат стойностите на
елементите в двумерен масив след обръщането му на +90 градуса.
*/
	const int HEIGTH = 4;
	const int WIDTH = 4;

	int arr[HEIGTH][WIDTH] = {  { 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 10, 11, 12 },
								{ 13, 14, 15, 16 } 
							};
	std::cout << "ARRAY:\n";
	for (int i = 0; i < HEIGTH; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
	std::cout << "ARRAY + 90 degree: \n";
	for (int j = 0; j < HEIGTH ; j++)
	{
		for (int i = WIDTH -1; i >= 0; i--)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}
void task_5()
{
	const int HEIGHT = 4;
	const int WIDTH = 4;

	int arr[HEIGHT][WIDTH] = { { 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 },
	{ 13, 14, 15, 16 }
	};
	int maxRowSum = 0;
	int maxColSum = 0;
	for (int i = 0; i < HEIGHT; i++)
	{
		int rowSum = 0;
		int colSum = 0;
		for (int j = 0; j < WIDTH; j++)
		{
			rowSum = rowSum + arr[i][j];
			colSum = colSum + arr[j][i];
		}
		if (rowSum > maxRowSum)
		{
			maxRowSum = rowSum;
		}
		if (colSum > maxColSum)
		{
			maxColSum = colSum;
		}
	}
	
	std::cout << "Maximum ROW sum: " << maxRowSum << '\n' << "Maximum COL sum: " << maxColSum << '\n';
	if (maxRowSum > maxColSum)
	{
		std::cout << "Maximum ROW sum > maximum COL sum.\n";
	}
	else
	{
		std::cout << "Maximum ROW sum < maximum COL sum.\n";
	}
}
void task_6()
{
	/*
	Имате предварително въведени стойности от естествени числа.
Числата са въведени в квадратна таблица с размери 6 реда и 6
колони.
Да се състави програма, чрез която се намира сумата на всички
елементи от редовете с четни номера: 2,4 и 6.
Програмата да извежда и сумата на всеки отделен ред.
*/
	const int HEIGHT = 6;
	const int WIDTH = 6;

	int arr[HEIGHT][WIDTH] = {  { 11,12,13,14,15,16, },
								{ 21,22,23,24,25,26, },
								{ 31,32,33,34,35,36, },
								{ 41,42,43,44,45,46, },
								{ 51,52,53,54,55,56, },
								{ 61,62,63,64,65,66  }
							 };
	int sumOfEvenRowElements = 0;
	for (int i = 0; i < HEIGHT; i++)
	{
		if (i & 1)
		{
			int sum = 0;
			for (int j = 0; j < WIDTH; j++)
			{
				std::cout << arr[i][j] << ' ';
				sum = sum + arr[i][j];
			}
			sumOfEvenRowElements = sumOfEvenRowElements + sum;
			std::cout << " SUM " << sum << '\n';
		}
	}
	std::cout << "Sum of elements: " << sumOfEvenRowElements << '\n';
}
void task_7()
{
	const int HEIGHT = 6;
	const int WIDTH = 6;
	
	int arr[HEIGHT][WIDTH] = { { 11,12,13,14,15,16, },
	{ 21,22,23,24,25,26, },
	{ 31,32,33,34,35,36, },
	{ 41,42,43,44,45,46, },
	{ 51,52,53,54,55,56, },
	{ 61,62,63,64,65,66 }
	};
	int sumOfElements = 0;
	for (int i = 0; i < HEIGHT; i++)
	{		
		int sum = 0;
		for (int j = 0; j < WIDTH; j++)
		{
			if (!((i + j) & 1))
			{
				std::cout << arr[i][j] << ' ';
				sum = sum + arr[i][j];
			}
		}
		sumOfElements += sum;
		std::cout << '\n' << "SUM of elements on this row is: " << sum << '\n';
	}
	std::cout << "---SUM OF ELEMENTS: " << sumOfElements << "---" <<'\n';
}



int main()
{
	task_0_11();
	return 0;
}