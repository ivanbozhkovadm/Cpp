#include<iostream>

void task_1()
{
	/*
	 �� �� ������� �� ������ ������� �� 1 �� 100.
	*/
	int counter = 1;
	while (counter <= 100)
	{
		std::cout <<  counter << ' ';
		counter++;
	}
}
void task_2()
{
	/*
	�� �� ������� �� ������ ������ �� -20 �� 50
	*/
	int counter = -20;
	while (counter <= 50)
	{
		std::cout << counter << ' ';
		counter++;
	}
}
void task_3()
{
	/*
	�� �� ������� �� ������ ������ ������� ����� �� -10
�� 10
	*/
	int counter = -10;
	while (counter <= 10)
	{
		if (counter % 2 != 0)
		{
			std::cout << counter << ' ';
		}
		counter++;
	}
}
void task_4()
{
	/*
	�� �� ������� �� ������ ������� �� 10 �� 1 � �������
	���.
	*/
	for (int i = 10; i > 0; i--)
	{
		std::cout << i << ' ';
	}
}
void task_5()
{
	/*
	�� �� ������� �� ����������� 2 �����. � �� ��
������� �� ������ ������ ����� �� ��-������� �� ��-��������.
	*/
	int firstNumber, secondNumber;
	std::cin >> firstNumber;
	std::cin >> secondNumber;
	if (firstNumber < secondNumber)
	{
		while (firstNumber <= secondNumber)
		{
			std::cout << firstNumber << ' ';
			firstNumber++;
		}
	}
	else
	{
		while (secondNumber <= firstNumber)
		{
			std::cout << secondNumber << ' ';
			secondNumber++;
		}
	}
}
void task_6()
{
	/*
	 �� �� ������� ����� �� ������(���������) � �� ��
������ ����� �� ������ ����� ����� 1 � ���������� �����.
	*/
	int input, sum = 0;
	std::cin >> input;
	for (int i = 1; i <= input; i++)
	{
		sum =sum + i;
	}
	std::cout << sum << '\n';

}
void task_7()
{
	/*
	 ���������� �� 3, �� �� ������� �� ������ ������� n
����� ����� �� ����� �� 3. ������� �� �� ��������� ��� �������.
	*/
	int n;
	std::cin >> n;
	int counter = 0;
	int i = 3;
	while (counter < n)
	{
		if (i % 3 == 0)
		{
			std::cout << i << ' ';
			counter++;
		}
		i++;
	}
	
}
void task_8()
{
	/*
	�� �������� ����� n, �� �� ������ �� ������ ������� ��
������� �����:
�������� n:
1
0
�������� n:
2
11
33
�������� n:
3
222
444
666
�������� n:
4
3333
5555
7777
9999
	*/
	int input;
	std::cin >> input;
	int output = input - 1;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			std::cout << output;
		}
		output += 2;
		std::cout << '\n';
	}
}
void task_9()
{
	/* �� �� �������� 2 ����� �� ������������ � � �.
�� �� ������� ������ ����� �� � �� � �� ������ 2(��������� �
�������).��� ����� ����� � ������ �� 3, �� �� ������ ��������� ��
������� �� �������� �skip 3�.��� ������ �� ������ �������� ����� (���
������������) ����� ��-������ �� 200, �� �� �������� �����������.
*/
	int firstNumber, secondNumber;
	int sum = 0;
	std::cin >> firstNumber >> secondNumber;
	while (firstNumber <= secondNumber)
	{
		if (firstNumber % 3 == 0)
		{
			std::cout << "skip " << firstNumber  << ' ';
		}
		sum = sum + (firstNumber*firstNumber);
		if (sum > 200 )
		{
			break;
		}
		std::cout << firstNumber*firstNumber << ' ';
		firstNumber++;
	}
}
void task_10()
{
	/*
	�������� ����� �� ������������ � ���������� ���� �
������. ������ ����� � ���� ����� �� ���� ���� �� 1 � �� ����
��.
*/
	int number;
	bool flag = false;
	std::cin >> number;
	
	for (int i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
	{
		std::cout << number << " is prime\n";
	}
	else
	{
		std::cout << number << " is not prime\n";
	}
}
void task_11()
{
	/*�������� ����� N ���� ��������� � ��������� ����
�������� ������� ���������� � �������� N:
	*
   ***
  *****
........
�a�� ������������ ���������� � ����������� �����
����������, �� ����������.
*/
	int n;
	std::cin >> n;
	int numberOfSpaces = n;
	int numberOfStars = -1;
	for (int row = 0; row < n; row++)
	{
		for (int i = 0; i < numberOfSpaces; i++)
		{
			std::cout << ' ';
		}
		for (int j = 0; j <numberOfStars + 2 ; j++)
		{
			std::cout << '*';
		}
		numberOfStars += 2;
		numberOfSpaces--;
		std::cout << '\n';
	}
}
void task_11_1()
{
	int n;
	std::cin >> n;
	int lastRowCounter = n;
	//first row
	for (int i = 0; i < n; i++)
	{
		std::cout << ' ';
	}
	std::cout << '*';
	for (int i = 0; i < n; i++)
	{
		std::cout << ' ';
	}
	std::cout << '\n';

	int innerSpacesCounter = 1;
	//from second line to n-th - 1 line
	while (n-2 > 0)
	{
			//outer spaces
		for (int lSpace = 1; lSpace < n; lSpace++)
		{
			std::cout << ' ';
		}
		std::cout << '*';
			//inner spaces
		for (int i = 0; i < innerSpacesCounter; i++)
		{
			std::cout << ' ';
		}
		std::cout << '*';
			//outer		spaces
		for (int lSpace = 1; lSpace < n; lSpace++)
		{
			std::cout << ' ';
		}
		std::cout << '\n';
		n--;
		innerSpacesCounter += 2;
	}
	//last row
	std::cout << " ";
	for (int i = 0; i < lastRowCounter; i++)
	{
		std::cout << '*' << ' ';
	}
	std::cout << '\n';
}
void task_12()
{
	/*�� �� ������� ��������, ����� ������� ������
���������� ���������� �����, ����� ����� ������� ����� �.�.
100,101, 606 � �.�. �� �� ��������. */
	for (int i = 100; i < 1000; i++)
	{
		int firstDigit = i / 100;
		int secondDigit = (i / 10) % 10;
		int thirdDigit = i % 10;
		if ((firstDigit!= secondDigit) && (firstDigit!= thirdDigit) && (secondDigit!=thirdDigit))
		{
			std::cout << i << ' ';
		}
	}
}
void task_13()
{
	/*�� �� ������� ��������, ����� ������� ������
���������� ���������� �����, ����� ���� ���� �� ������� �����
�� ������ �����.
*/
	int input;
	std::cin >> input;
	for (int i = 100; i < 1000; i++)
	{
		int firstDigit = i / 100;
		int secondDigit = (i / 10) % 10;
		int thirdDigit = i % 10;
		int sum = firstDigit + secondDigit + thirdDigit;
		if (sum == input)
		{
			std::cout << i << ' ';
		}
	}
}
void task_14()
{
	/*�� �� ������� ��������, ����� �� ��������
���������� ����� N �� ��������� [10..200] ������� � �������
��� ������ �����, ����� �� ������ �� 7 � �� ��-����� �� N.
*/
	int n;
	std::cin >> n;
	if ((n > 10) && (n < 200))
	{
		while (n > 0)
		{
			if (n % 7 == 0)
			{
				std::cout << n << ' ';
			}
			n--;
		}
	}
}
void task_15()
{
	/*�� �� ������� ��������, ����� �� ������� ������ ��
������ ����� �� 1 �� �������� ����� N.
*/
	int number, sum = 0;
	std::cin >> number;
	do
	{
		sum += number;
		number--;
	} while (number > 0 );
	std::cout << sum << '\n';
}
void task_16()
{
	/*�� �� ������� ��������, ���� ����� �� �������� 2 ����������
����� N, M �� ��������� [10..5555].
����������, ���� ����� for, �� ������� ������ ����� ��
���������, ����� �� ������ �� 50 � �������� ���.
*/
	int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;
	if ((firstNumber > 10) && (firstNumber < 5555) && (secondNumber > 10) && (secondNumber < 5555))
	{
		if (firstNumber < secondNumber)
		{
			for (int i = secondNumber; i > firstNumber; i--)
			{
				if (i % 50 == 0)
				{
					std::cout << i << ' ';
				}
			}
		}
		else
		{
			for (int i = firstNumber; i > secondNumber; i--)
			{
				if (i % 50 == 0)
				{
					std::cout << i << ' ';
				}
			}
		}
	}
}
void task_17()
{
	/*�� �� ������� ��������, ����� ������� �������, ����� ������ ��
�������� ��� ����� *, � ������������ � ��������� ��� �������
����.
������ ����� b - ������� �� �������� ����� �� ���������
[3..20], c - ����� ����.
���������� �� �������� ����� for. */
	int length;
	char c;
	std::cin >> length;
	std::cin >> c;
	//first row
	for (int i = 0; i < length; i++)
	{
		std::cout << '*';
	}
	std::cout << '\n';
	for (int row = 2; row <= length - 2; row++)
	{
		std::cout << '*';
		for (int spaces = 2; spaces <= length-1; spaces++)
		{
			std::cout << c;
		}
		std::cout << '*';
		std::cout << '\n';
	}
	//last row
	for (int i = 0; i < length; i++)
	{
		std::cout << '*';
	}
	std::cout << '\n';
}
void task_18()
{
	/*�� �� ������� ��������, ���� ����� �� ������� ��� ����� ��
��������� [1..9].
���������� �� ������� ��������� �� ���������.
������������ �������� �� ����������� � ���������� �� 2-��
�����.*/
	int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;

	for (int i = 1; i <= firstNumber; i++)
	{
		std::cout << "---" << i << "---\n";
		for (int j = 1; j <= secondNumber; j++)
		{
			std::cout << i << '*' << j << " = " << i*j;
			std::cout << '\n';
		}
		std::cout << '\n';
	}
}
void task_19()
{
	/*
	�� �� ������� ��������, ���� ����� �� ��������
���������� ����� �� ��������� [10..99] �� ������� ��������
�����, ��� �������� �� �������� ����������:
1) ��� ����������� ����� � ����� �� ������� 0.5*�������;
2) ��� ����������� ����� � ������� �� ������� 3*������� +1.
����������� ���������� ������ �� �� ������ �������� 1.
*/
	int number;
	std::cin >> number;
	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number *= 0.5;
		}
		else
		{
			number = (number * 3) + 1;
		}
		std::cout << number << ' ';
	}
}
void task_20()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������� ������� ��
�����. ������ �� ���������� �� ���������� ��� ��� ����� ��
����� �� 45.

	*/
	int counter = 0;
	for (int i = 0; i < 10; i++)
	{
		int j;
		for (j = i; j < 9; j++)
		{
			std::cout << j << ' ';
		}
		for (int k = 9; k != 9-j ; k--)
		{
			for (int n = 0; n < i; n++)
			{
				std::cout << n << ' ';
			}
			break;
		}
		std::cout << i << '\n';
	}
}
void task_21()
{
	/*
	������ � �������� ����� �����.
��������� �� ������ �� ����� �: 2,3,4,5,6,7,8,9,10, ����, ����,
���, ���.
��������� �� ���� �� ������� �: ������, ����, ����, ����.
�� �� ������� ��������, ���� ����� �� ������� N - ����� ��
��������� [1..51] � �� �������� ��������� ����� ����� �
���������� ��-������ ����� �� �������. 
*/
	int input;
	std::cin >> input;
	
	for (; input<= 52; input++)
	{
		int number = (input - 1) / 4 + 2;
		int suit = input % 4;
		if (number > 10)
		{
			switch (number)
			{
			case 11: std::cout << 'J'; break;
			case 12: std::cout << 'Q'; break;
			case 13: std::cout << 'K'; break;
			case 14: std::cout << 'A'; break;
			default:
				break;
			}
		}
		else
		{
			std::cout << number;
		}
		switch (suit)
		{
		case 0:std::cout << " of spades\n"; break;
		case 1:std::cout << " of clubs\n"; break;
		case 2:std::cout << " of diamonds\n"; break;
		case 3:std::cout << " of hearts\n"; break;
		default:
			break;
		}
	}
}
void task_22()
{
	/*
	�� �� ������� ��������, ����� ������� ������� 10 ���-�����
�����, ����� �� ����� �� 2, 3 ��� �� 5 � ����� �� ��-������ ��
�������� ���������� �����.
������� �� ��������, ������ � ������ ������� �����.
������ �����: ����� �� ��������� [1..999]
	*/
	int counter = 10;
	int innerCounter = 1;
	int number;
	std::cin >> number;
	
		while (innerCounter <= 10 )
		{
			
			if ((number % 2 == 0) || (number % 3 == 0) || (number % 5 == 0))
			{
				std::cout << innerCounter << ':' << number << ' ';
				innerCounter++;
			}
			number++;
		}
	
}
void task_23()
{
	/*�� �� ������� ��������, ����� ���� ����� while �������
��������� �� ���������, �� ��� ����������.
�.�. ��� � �������� 4*5 �� �� ������� 5*4. */
	int number;
	std::cin >> number;
		for (int i = 1; i <= number; i++)
		{
			for (int j = 1; j <= number; j++)
			{
				if (i > j)
				{
					continue;
				}
				std::cout << i << '*' << j << " = " << i*j;
				std::cout << '\n';
			}
			std::cout << '\n';
		}
	
}
void task_24()
{
	/*���� ����� X � ���������, a�� �� ���� ������� ������ ����� �
����� ������.
�� �� ������� ��������, ����� ��������� ���� �������� ����� �
���������.
������ �����: N - ���������� ����� �� ��������� [10 .. 30000].
������: 17571
�����: ������� � ���������
*/
	//TO DO
}
void task_25()
{
	/*
	�� �� ������� ��������, ����� �� ������ ����� N, �� ���������
	N!, �.�. 1*2*3*4...*N.
	*/
	int n;
	std::cin >> n;
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}
	std::cout << result << '\n';
}
int main()
{
	//TO DO 24 
	
	return 0;
}
