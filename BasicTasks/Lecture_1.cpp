#include<iostream>

void task_1()
{
	/*
	�� �� ������� ��������� ��� ����������� � �� �� �������� 2 ����� ��
������������ A � B (���� �� �� � ������� ������� � double).
����� �� �� ������� 3-�� ����� C � �� �� ������� ���� �� � �/� A � B.
�� �� ������ ��������� ��������� �� ���� ���� C � ����� A � B.
	*/
	
	float a, b;
	std::cout << "Please, enter A: ";
	std::cin >> a;
	std::cout << "Please, enter B: ";
	std::cin >> b;

	float c;
	std::cout << "Please, enter C: ";
	std::cin >> c;

	//check if a < c < b OR a > c > b
	if ((a < c && c < b) || (a > c && c > b))
	{
		std::cout << "Number " << c << " IS between " << a << " and " << b << '\n';
	}
	else
	{

		std::cout << "Number " << c << " is NOT between " << a << " and " << b << '\n';
	}
}
void task_2()
{
	/*
	�������� 2 �������� ����������� ����� �� ���������. ��������
������� ����, �������, ������������, ������� �� ������� �
����������� ������� � ������� ���������� � ������������ ����
��������� � ���������. �������� ������ � ����� � ������� �������.
	*/
	int a, b;
	std::cout << "Please, enter A: ";
	std::cin >> a;
	std::cout << "Please, enter B: ";
	std::cin >> b;
	int sum, difference, product, reminderOfDevision, integerDevision;
	sum = a + b;
	std::cout << "SUM: " << sum << '\n';
	difference = a - b;
	std::cout << "DIFFERENCE: " << difference << '\n';
	product = a * b;
	std::cout << "PRODUCT: " << product << '\n';
	reminderOfDevision = a % b;
	std::cout << "REMINDER OF DEVISION: " << reminderOfDevision << '\n';
	integerDevision = a / b;
	std::cout << "INTEGER DEVISION: " << integerDevision << '\n';

}
void task_3()
{
	/*
	�������� 2 �������� ����� �� ��������� � ��������� ���������� ��.
������������ ������ ���������
	*/
	int a, b;
	std::cout << "Please, enter A: ";
	std::cin >> a;
	std::cout << "Please, enter B: ";
	std::cin >> b;
	//change value 
	int temp;
	temp = a;
	a = b;
	b = temp;
	std::cout << "Value of A: " << a <<'\n';
	std::cout << "Value of B: " << b <<'\n';
}
void task_4()
{
	/*
	�������� 2 �������� ����� �� ��������� � �� ������������ �
��������� ���.
	*/
	int a, b;
	std::cout << "Please, enter A: ";
	std::cin >> a;
	std::cout << "Please, enter B: ";
	std::cin >> b;
	
	//check
	if (a < b)
	{
		std::cout << a << ' ' << b << '\n';
	}
	else
	{
		std::cout << b << ' ' << a << '\n';
	}
}
void task_5()
{
	/*
	�������� 3 �������� ����� �� ��������� � �� ������������ � ��������
���.
	*/
	int a, b, c;
	std::cout << "Please, enter A: ";
	std::cin >> a;
	std::cout << "Please, enter B: ";
	std::cin >> b;
	std::cout << "Please, enter C: ";
	std::cin >> c;
	
	int firstMax, secondMax, thirdMax;
	//check
		//if c is MAX
	if (c > a && c > b)
	{
		firstMax = c;
		if (a < b)
		{
			secondMax = b;
			thirdMax = a;
		}
		else
		{
			secondMax = a;
			thirdMax = b;
		}
	}
	// if b is MAX
	else if (b > a && b > c)
	{
		firstMax = b;
		if (a < c)
		{
			secondMax = c;
			thirdMax = a;
		}
		else
		{
			secondMax = a;
			thirdMax = c;
		}
	}
		//if a is MAX
	else
	{
		firstMax = a;
		if (b < c)
		{
			secondMax = c;
			thirdMax = b;
		}
		else
		{
			secondMax = b;
			thirdMax = c;
		}
	}
	std::cout << firstMax << ' ' << secondMax << ' ' << thirdMax << '\n';
}
void task_6()
{
	/*
	�������� 3 ����� �� ������������ �1, �2 � �3. ��������� �����������
�� ����, �� �1 �� ��� ���������� �� �2, �2 �� ��� ���������� �� �3, �
�3 �� ��� ������� �������� �� �1.
	*/
	int a1, a2, a3;
	std::cin >> a1 >> a2 >> a3;
	std::cout << "A1: " << a1 << "\nA2: " << a2 << "\nA3: " << a3 << '\n';
	int temp;
	temp = a1;
	a1 = a2;
	a2 = a3;
	a3 = temp;
	std::cout << "\nA1: " << a1 << "\nA2: " << a2 << "\nA3: " << a3 << '\n';
}
void task_7()
{
	/*
	�������� 3 ���������� �� ������������ � ��� (���������� ���), ����
���� (����� � ������� �������), ���� ��� ����� � ����� ���.
��������� ��������, ����� ����� ������� �� ������ �� ���� ����� ��
������� �����:
 - ��� ��� �����, ���� �� �������
 - ��� ���� ����, �� �� ���� ���������
 - ��� ����� � �� ���� ����� � �� ��� ���
 - ��� ��� �����, �� ����� �� ���� � ��������
 - ��� ���� ��-����� �� 10 ��, �� ����� �� ����.
���������� ������� �������� ���� ��������� � ���������.
*/
	int hour = 0;
	double money;
	bool isIll;
	std::cout << "MONEY: ";
	std::cin >> money;
	std::cout << "Am I ill?(y/n)";
	char answer;
	std::cin >> answer;

	//check if I am ill
	if (answer == 'y')
	{
		isIll = true;
	}
	else
	{
		isIll = false;
	}

	//program logic
	if (isIll == true)
	{
		std::cout << "I will not go out!\n";
		if (money > 0)
		{
			std::cout << "I will buy pill!\n";
		}
		else
		{
			std::cout << "I will stay at home and I will drink tea!\n";
		}
	}
	else 
	{
		if (money < 10)
		{
			std::cout << "I will go to cafe!\n";
		}
		else
		{
			std::cout << "I will go to the cinema with my friends!\n";
		}
	}
	
	

}
void task_8()
{
	/*
	�� �� ������� ��������, ����� ���� �� ��������� 4-������o
���������� ����� �� ��������� [1000.. 9999]. �� ���� ����� ��
�������� 2 ���� 2-������� �����. ������� ����� �� ������� �� 1-��
� 4-�� ����� �� ���������� �����. ������� ����� �� ������� �� 2-�a -
3-�� ����� �� ���������� �����. ���� �������� �� �� ������ ���� 1-��
���� ����� e ��-����� <, ����� = ��� ��-������ �� 2-�� �����.
*/
	int number = 1596;
	if (number > 1000 && number < 9999)
	{
		//First number
			//save first 2 digits => firstDigit_secondDigit
		int firstNumber = number / 100;
			//result number - second digit => firstDigit_0
		firstNumber = firstNumber - firstNumber % 10;
			//firstDigit_0 + last digit from original number
		firstNumber = firstNumber + number % 10;
		//Second number
			//delete last digit
		int secondNumber = number / 10;
			//delete first digit
		secondNumber = secondNumber % 100;


		std::cout <<"FIRST number: " << firstNumber << "\nSECOND number: " << secondNumber << '\n';

		if (firstNumber > secondNumber)
		{
			std::cout << firstNumber << " > " << secondNumber << '\n';
		}
		else
		{
			std::cout << firstNumber << " < " << secondNumber << '\n';
		}
	}
}
void task_9()
{
	/*
	�� �� ������� ��������, ����� ���� �� ��������� 2 ����������
���������� ����� a,b.
���������� �� ������ � ��������� ���� ���������� ����� ��
�������������� �� ����� ����� � �����, ����� � ������ �����. 
*/
	int a, b;
	std::cout << "Please, enter a and b: ";
	std::cin >> a >> b;
	int product, lastDigit;
	product = a * b;
	lastDigit = product % 10;
	std::cout << product << ", " << lastDigit;
	if (lastDigit % 2 == 0)
	{
		std::cout << " - even\n";
	}
	else
	{
		std::cout << " - odd\n";
	}
}
void task_10()
{
	/*
	������ �� �� ������� �������� � ����. ����� 2 ���� � ���������� 2 �
3 ����� � �� �������� ������������.
�� �� ������� ��������, ����� �� ����� ���� ������� ��� �� ��������
��������� � ���� ����, �.�. ��-����� ���� �� �� ����� ����� ��
������. ������ �� ����� �� �� ������� � �������� ���������� ����.
	*/
	int number,counter2 = 0, counter3 = 0;
	std::cout << "Please, enter number: ";
	std::cin >> number;
	while (number > 1)
	{
		if (number != 0 && number != 1)
		{
			number = number - 2;
			counter2++;
		}
		if (number != 0 && number != 1)
		{
			number = number - 3;
			counter3++;
		}
	}
	if (counter2 < counter3)
	{
		std::cout << counter2<<" bucket form 3l."<<'\n';
		std::cout << counter2 << " bucket form 2l." << '\n';
		std::cout << "Additional bucket form 3l.";
	}
	else
	{
		std::cout << counter3 << " bucket form 3l." << '\n';
		std::cout << counter3 << " bucket form 2l." << '\n';
		std::cout << "Additional bucket form 2l.";
	}
	std::cout << '\n';

}
void task_11()
{
	/*
	��������� ��������, ����� �� ������ ���������o ����� ���������
���� ������� �� ���� �� ����� ���� �����. ��� ���������� ����� ��
���� ����� 0.
*/
	int number, counter = 0;
	std::cout << "Please, enter your number: ";
	std::cin >> number;

	int firstDigit = number / 100;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = number % 10;
	if (number % firstDigit == 0)
	{
		counter++;
	}
	if (number % secondDigit == 0)
	{
		counter++;
	}
	if (number % thirdDigit == 0)
	{
		counter++;
	}
	//digits
	std::cout << "Digits: ";
	std::cout << firstDigit<<' ';
	std::cout << secondDigit<<' ';
	std::cout << thirdDigit<<'\n';
	if (counter == 3)
	{
		std::cout << "YES!\n";
	}
	else
	{
		std::cout << "NO!\n";
	}
}
void task_12()
{
	/*
	��������� ������ �� ������ ������ ������ �� 4 � ����������
����������, �� ��� �������� ������ �� 400, �.�. 1900 �� � ���������,
�� 1600 � 2000 �� ���������.
��������� ��������, ����� �� ������ ���, �����, ������ ���������
���������� ����.
	*/
	int day, month, year;
	bool isBissextile;
	
}
void task_13()
{
	/*
	�� �� ������� ��������, ����� �� ������� ����� � �������/����� ��
���������� ����������� t � ������ ������.
�������������� ��������� ��:
��� -20 ������ �������;
����� 0 � -20 - �������;
����� 15 � 0 - ������;
����� 25 � 15 - �����;
��� 25 � ������.
������ �����: ���� ����� �� ��������� [-100..100].
	*/
	int temperature;
	std::cin >> temperature;
	if (temperature <= -20)
	{
		std::cout << "It is icily!\n";
	}
	else if (temperature > -20 && temperature <= 0)
	{
		std::cout << "It is coldly!\n";
	}
	else if (temperature > 0 && temperature <= 15)
	{
		std::cout << "It is chilly!\n";
	}
	else if (temperature > 15 && temperature <= 25)
	{
		std::cout << "It is warm!\n";
	}
	else
	{
		std::cout << "It is hot!\n";
	}
}
void task_14()
{
	/*
	�� �� ������� ��������, ����� �� �������� ���������� �� 2 �������
�� ���������� ����� ������� ������� ���� �� �������� � ������� ���
�������� ����.���������� ����� � ���������.
�������� �� ��� ������ ����� �� ��������� [1..8].
������: 2 2 3 2
�����: ��������� �� � �������� ����
	*/
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	//First position
	bool firstPointIsBlack;
		//black
	if ((x1 % 2 == 0 && y1 % 2 == 0) | (x1 % 2 != 0 && y1 % 2 != 0))
	{
		firstPointIsBlack = true;
	}
		//white
	else
	{
		firstPointIsBlack = false;
	}

	//Second position
	bool secondPointIsBlack;
		//black
	if ((x2 % 2 == 0 && y2 % 2 == 0) | (x2 % 2 != 0 && y2 % 2 != 0))
	{
		secondPointIsBlack = true;
	}
		//white
	else
	{
		secondPointIsBlack = false;
	}

	//check 
	if (firstPointIsBlack == secondPointIsBlack)
	{
		std::cout << "The possitions are with the same color\n";
	}
	else
	{
		std::cout << "The possitions are NOT with the same color\n";
	}
}
void task_15()
{
	/*
	�� �� ������� ��������, ����� ������� ���������� ����� �� ���������
[0..24].
���������� �� ������ ������������� ��������� ��������� ���������
���.
��������� ��:
[18..4] - ����� �����;
[4..9] - ����� ����;
[9..18] - ����� ���
	*/
	
	int hour;
	std::cout << "Enter hour: ";
	std::cin >> hour;

	if (hour >= 4 && hour < 9)
	{
		std::cout << "Good morning!\n";
	}
	else if (hour >= 9 && hour < 18)
	{
		std::cout << "Good afternoon!\n";
	}
	else if((hour >= 18 && hour <= 24) | (hour>= 1 && hour < 4))
	{
		std::cout << "Good night!\n";
	}
}
void task_16()
{
	/*
	�������� � ���������� ���������� ����� �� ���� abc.
������ �� �� ������� ����:
��� a = b = c - �����: ������� �� �����;
��� a>b>c - �����: ������� �� ��� �������� ���;
��� a<b<c ������� �� � �������� ���;
� �����: ������� �� ����������, �� ����������� ������.
�� �� ������� ��������, ����� ������� ��������� �� ���������� ��
������� �� ������� � �������.
	*/
	int number, firstDigit, secondDigit, thirdDigit;
	std::cin >> number;
	firstDigit = number / 100;
	secondDigit = (number / 10) % 10;
	thirdDigit = number % 10;

	std::cout <<"Digits are: " << firstDigit << ' ' << secondDigit << ' ' << thirdDigit << '\n';
	if ((firstDigit == secondDigit) && (secondDigit == thirdDigit))
	{
		std::cout << "All digits are equal\n";
	}
	else if ((firstDigit < secondDigit) &&(secondDigit  < thirdDigit))
	{
		std::cout << "The numbers are in ascending order\n";
	}
	else if ((firstDigit > secondDigit) && (secondDigit > thirdDigit))
	{
		std::cout << "The numbers are in descending order\n";
	}
	else
	{
		std::cout << "Digits are unordered\n";
	}
}

int main()
{
	task_1();

	return 0;
}
