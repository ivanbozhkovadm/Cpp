#include<iostream>
#include<string>
using namespace std;

void task_1()
{
/*
�� �� ������� ��������, ���� ����� �� �������� ��� ���� ���������
�� 40 ������ � ����� �����.
���� �������� �� ������ �� �� �������� �������� ���� � ������ � ����
� ����� �����.
*/
string input;
cin >> input;
int length = input.length();
for (int i = 0; i < length; i++)
{
	if ((input[i] >= 'a') && (input[i] <= 'z'))
	{
		char newChar;
		newChar = (int)input[i] - 32;
		input[i] = newChar;
	}
}
cout << input << ' ';
for (int i = 0; i < length; i++)
{
	if ((input[i] >= 'A') && (input[i] <= 'Z'))
	{
		char newChar;
		newChar = (int)input[i] + 32;
		input[i] = newChar;
	}
}
cout << input << '\n';

}
void task_2()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������������ �� ��������
	�������������� ��� ���� � ������� 10-20 �����.
	���������� �� ������� ������� �� 5 ����� � �� ������ ��������� ��
	��-�������, ����� � ������ �� ����������.
	*/
	string input = "uchilishe", secondInput = "uchenik";
	for (int i = 0; i < 5; i++)
	{
		char temp;
		temp = input[i];
		input[i] = secondInput[i];
		secondInput[i] = temp;
	}
	cout << input << ' ' << secondInput << '\n';
}
void task_3()
{
	/*
	�� �� ������� ��������, ���� ����� �� �������� �������������� ���
	������ �� ������� ��� ���������.
	���������� �� ������� ��������� �� ��������� �� ����������� �� ��
	�� �o�����.
	*/
	string input1, input2;
	cin >> input1 >> input2;
	int length;
	if (input1.length() < input2.length())
	{
		length = input2.length();
	}
	else
	{
		length = input1.length();
	}
	if ((input1.length()) == (input2.length()))
	{
		cout << "Both of strings are with equal length\n";
	}
	else
	{
		cout << "Strings are with different length\n";
	}

	for (int i = 0; i < length; i++)
	{
		if ((input1[i] == '\0') | (input2[i] == '\0'))
		{
			break;
		}
		if (input1[i] != input2[i])
		{
			cout << "On position: " << i + 1 << "-->" << input1[i] << '-' << input2[i] << '\n';
		}
	}
}
void task_4()
{
	/*
	�� �� ������� ��������, ���� ����� �� �������� ����� ����� �� �����
������ ��������� ��� �������, �� ������� ��� ��� ��� ��-����� ����
�� ASCII �������� �� ����������� ����� �����.
	*/
	string names;
	cin >> names;
	bool flag = false;
	string firstName, secondName;
	int counter = 0;
	int sumFirstName = 0, sumSecondName = 0;

	for (int i = 0; i < names.length(); i++)
	{
		if (names[i] == ',')
		{
			flag = true;
			counter = i;
			continue;
		}

		if (flag == false)
		{
			sumFirstName = sumFirstName + (int)names[i];
			firstName.push_back(names[i]);
			counter++;
		}
		else
		{
			sumSecondName = sumSecondName + (int)names[i];
			secondName.push_back(names[i]);
			counter++;
		}
	}
	if (sumFirstName < sumSecondName)
	{
		cout << secondName << '\n';
	}
	else
	{
		cout << firstName << '\n';
	}

}
void task_5()
{
	/*
	�� �� ������� ��������, ���� ����� �� �������� 2 ������ �� �����
(����).
��� � ����� ������ ������� ���� � ���� ����, �� �� ������ �� ������
������� ������ ������������, � ������� ����������, ���� �� �� ��
�������� � ����� �� ����.
��� �������� ����� ��� ���� �� �� ������ ���� ������������
���������.
	*/
	string input1, input2;
	input1 = "game";
	input2 = "over";
	for (int i = 0; i < input1.length(); i++)
	{
		cout << input1[i];
		for (int j = 0; j < input2.length(); j++)
		{
			if (input1[i] == input2[j])
			{
				string temp = input2;
				temp.erase(temp.begin(),temp.begin()+j+1);
				cout << temp;
			}
		}
		cout << endl;
	}
}
void task_6()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������� ��������� � �������
����.
���� �������� �� ������ �� �� ������� ����� �����, �� ����� �������
���� �� ������� � ������ �����, � ���������� � ����� �� �� �����.
	*/
	string input = "progrAming is Fun and super cool";
	if ((input[0] >= 'a') && (input[0] <= 'z'))
	{
		(char)input[0] = (int)input[0] - 32;
	}
	for (int i = 1; i < input.length(); i++)
	{
		if ((input[i] >= 'a') && (input[i] <= 'z') && (input[i - 1] == ' '))
		{
			(char)input[i] = (int)input[i] - 32;
		}
		if ((input[i] >= 'A') && (input[i] <= 'Z') && (input[i - 1] != ' '))
		{
			(char)input[i] = (int)input[i] + 32;
		}
	}
	cout << input << endl;
}
void task_7()
{
	/*
	�� �� ������� ��������, ����� ���� ����� �� ���� ��������� �
��������.
���� �������� �� �� �������� ���� �� ���������� ����, ����� � ����
����� � ���-������� ����.
	*/
	string input = "asd fmmmmmmmmmmmmmmg hjkl wer scll sadasd asdasd";
	int wordsCounter = 1;
	int charCounter = 0;
	int i = 1;
	int maxChars = 0;
	while (input[i] != '\0')
	{
		int previousWordCounter = 0;
		if (((input[i + 1] != ' ') | (input[i + 1] == '\0')) && (input[i] == ' '))
		{
			charCounter = 0;
			previousWordCounter = wordsCounter;
			wordsCounter++;
		}
		if (previousWordCounter != wordsCounter)
		{
			charCounter++;
		}
		if (charCounter > maxChars)
		{
			maxChars = charCounter;
		}
		i++;
	}
	cout << wordsCounter << endl;
	cout << maxChars << endl;
	
}
void task_8()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������� ��� �� �������
(������, ���).
���������� �� ������ �� ������ ���� ��������� ������ � ���������,
�.�. ���� ����� ������-������� � �������-������ � ���� � ���.
	*/
	string input = "kapak";
	bool flag = true;
	int i = 0, j = input.length() -1;
	while (i < (input.length() / 2))
	{
		if (input[i]!=input[j])
		{
			flag = false;
			break;
		}
		i++;
		j--;
	}
	if (flag==false)
	{
		cout << "not\n";
	}
	else
	{
		cout << "it is\n";
	}
}
void task_9()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������� ��� �������� �����,
�����, ���� ����� '-' �� ������� ������ �� ���������� ����� ���� ��
������ ������ '-' ���� ����������� �����.
	*/
	string input = " asd-12sdf45-56asdf100";
	int sum = 0;
	int minus = 1;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			if (input[i-1] == '-' )
			{
				minus = -1;
			}
			else
			{
				minus = 1;
			}
			
			int numberOfDigits = 0;
			int counter = i;
			while (input[counter] >= '0' && input[counter] <= '9')
			{
				counter++;
				numberOfDigits++;
			}
				
			string newNumber = input.substr(i, i + numberOfDigits);
			std::string::size_type sz;
			int currentNumber = stoi(newNumber, &sz)*minus;
			cout << currentNumber <<'+';
			i = i + numberOfDigits;
			sum = sum + currentNumber;
		}
	}
	cout << "\nSUM: " << sum << '\n';
}
void task_10()
{
		/*
	�� �� ������� ��������, ����� �� ����� ��� ����� ����,
���������, �� ����� �� �������� ���� ��� ����� ��� �� ������
�� ASCII ��������� � ���������� ������� 5 � � �������
������������� ������.
	*/
	string input = "Hello";
	int i = 0;
	int sign;
	while (input[i] != '\0')
	{
		sign = (int)input[i] + 5;
		input[i] = (char)sign;
		i++;
	}
	cout << input << '\n';
}
int main()
{

	task_10();

	return 0;
}