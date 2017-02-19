#include<iostream>

void task_1()
{
	int arr[] = { 10, 3, 5, 8, 6, -3, 7 };
	//count number of elements
	int numberOfElements = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	for (int i = 0; i < numberOfElements; i++)
	{
		if ((arr[i] < min) && (arr[i] % 3 == 0))
		{
			min = arr[i];
		}
	}
	std::cout << "MIN number: " << min << '\n';
}
void task_2()
{
	/*���� �� ������� ����� �� �� ���������� ���, ���� ���������� ��
�������� �� ����� ���� �� �����������, � ������� �� �� ����
��������, �� � ������� ���. ��������, �� �� ������ ����� �����
�� ������.
*/
	int arr[] = { 10, 3, 5, 8, 6, -3, 7 };
	int numberOfElements = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < numberOfElements/2; i++)
	{
		std::cout << arr[i] << ' ';
	}
	for (int i = numberOfElements/2; i < numberOfElements; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_3()
{
	/*
�� �� ������ �����, ���� ����� �� �� ������� ����� � 10
�������� �� ������� �����:
������� 2 �������� �� ������ �� ���������� �����.
����� ������� ������� �� ������ � ����� �� ����� ��
���������� 2 �������� � ������.
���� ���� �������� ������ .
*/
	const int SIZE = 10;
	int number;
	std::cin >> number;
	int arr[SIZE];
	arr[0] = number;
	arr[1] = number;
	int sum = arr[0] + arr[1];
	for (int i = 2; i < SIZE; i++)
	{
		arr[i] = sum;
		sum = arr[i - 1] + arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_4()
{
	/*
	�� �� ������� ����� � �� �� �������� ���� � ���������.
	*/
	int numberOfElements;
	std::cin >> numberOfElements;
	int * arr = new int [numberOfElements];
	for (int i = 0; i < numberOfElements; i++)
	{
		std::cin >> arr[i];
	}
	int secondCounter = numberOfElements -1;
	for (int i = 0; i < numberOfElements/2; i++)
	{
		if (arr[0] != arr[secondCounter])
		{
			std::cout << "This array is NOT specular! ";
			break;
		}
		else
		{
			std::cout << "This array is specular! ";
		}
		secondCounter--;
	}
}
void task_5()
{
	/*
	�������� ��������, ����� ������� ����� � 10 �������� �
������������ ����� �� ���������� ��� �������� ����� �� ������� ��
�������� ������� �� 3.
�� �� ������� ���������� �� ������.
	*/
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i * 3;
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_6()
{
	/*
	�������� ��������, ����� ����� ���� 2 ������ � ����� �������
��������� ���� �� �������, � ���� �� � ������� ������.
	*/
	std::cout << "Please, enter size for first array: ";
	int sizeArr1;
	std::cin >> sizeArr1;
	std::cout << "Please, enter size for second array: ";
	int sizeArr2;
	std::cin >> sizeArr2;
	int * arr1 = new int[sizeArr1];
	std::cout << "Please, enter elements for first array: ";
	for (int i = 0; i < sizeArr1; i++)
	{
		std::cin >> arr1[i];
	}
	int * arr2 = new int[sizeArr2];
	std::cout << "Please, enter elements for second array: ";
	for (int i = 0; i < sizeArr2; i++)
	{
		std::cin >> arr2[i];
	}
	if (sizeArr1 == sizeArr2)
	{
		for (int i = 0; i < sizeArr1; i++)
		{
			if (arr1[i] != arr2[i])
			{
				std::cout << "These arrays are with different elements\n";
				break;
			}
			
		}
	}
	else
	{
		std::cout << "These arrays are with different lenght\n";
	}
}
void task_7()
{
	/*
	�������� ��������, ����� ����� ���� ����� � ����� ������� ���
����� ��� ����� ������ �� ������� �����: ���������� �� �����
������� �� ������ ����� �� � ����� �� ����� �� ���������� �
���������� ������� �� ���������� ������� �� ������ �����.
�� �� ������ ��������� �����.
	*/
	
	int size;
	std::cin >> size;
	int * arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr1[i];
	}
	int * arr2 = new int[size];
	
	for (int i = 2; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j = 0)
			{
				arr2[j] = arr1[0];
			}
			if (j = size - 1)
			{
				arr2[size - 1] = arr1[size - 1];
			}
			if( (j != 0 ) && (j != size-1))
			{
				arr2[j] = arr1[i - 1] + arr1[i + 1];
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr2[i] << ' ';
	}
}
void task_8()
{
	/*
	�������� ��������, ����� ������ � ������� ���-������� ������ ��
������� ������� �������� � ����� �����.
	*/
	int arr[] = { 10, 3, 5, 8, 6, 6, 6, -3, 7, 7, 1,1,1, 1 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int counter = 1;
	int currentElement;
	int nextElement;
	bool flag = false;
	int max = 0;
	int element;
	for (int i = 0; i < length - 1; i++)
	{
		currentElement = arr[i];
		nextElement = arr[i + 1];
		if (currentElement == nextElement)
		{
			flag = true;
			counter++;
		}
		else
		{
			flag = false;
		}
		//check 
		if (counter > max)
		{
			max = counter;
			element = currentElement;
		}

		if (flag == false)
		{
			counter = 1;
		}
	}
	std::cout << max <<" times repeating "<<element << '\n';
}
void task_9()
{
	/*
	�������� ��������, � ����� ����������� ������� �����, ���� �����
���������� �� ������ �� ������� � ������� ��� (����� �� � ������ ��
�� �������� � ������� ���, ��� ����� �� �� ������, ���� ����� �� ��
�������� � �������� ���). ��������� �� ������ �������� ����� � ����
������������ ����� � ����� ��� �� ���������� ���� �����.
	*/
	int arraySize;
	std::cin >> arraySize;
	int * arr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		std::cin >> arr[i];
	}
	int counter = arraySize -1;
	for (int i = 0; i < arraySize/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[counter];
		arr[counter] = temp;
		counter--;
	}
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << arr[i] << ' ';
	}

	delete[] arr;
}
void task_10()
{
	const int SIZE = 7;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum =sum + arr[i];
	}
	int maxNumber;
	bool isEnter = false;
	int avarage = sum / SIZE;

	while (isEnter != true)
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] == avarage)
			{
				maxNumber = arr[i];
				isEnter = true;
			}
		}
		if (isEnter == false)
		{
			avarage++;
		}
	}
	int minNumber;
	while (isEnter != true)
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] == avarage)
			{
				minNumber = arr[i] << '\n';
				isEnter = true;
			}
		}
		if (isEnter == false)
		{
			avarage--;
		}
	}
	bool isEqual = false;
	int saveMaxNumber = maxNumber;
	int saveMinNumber = minNumber;
	while (isEqual != true)
	{
		if (avarage == saveMaxNumber)
		{
			std::cout << maxNumber << '\n';
			break;
		}
		
		if (avarage == saveMinNumber)
		{
			std::cout << minNumber << '\n';
			break;
		}
		maxNumber--;
		minNumber++;
	}

}
void task_11()
{
	/*
	�� �� ������� ��������, ����� ������� �� ������������ 7 ���� �����
� ��������� �����
���������� �� ������ ������ ����� ������ �� 5, �� �� ������ �� 5.
	*/
	const int SIZE = 7;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		if ((arr[i] % 5 == 0) && (arr[i] > 5))
		{
			std::cout << arr[i] << ' ';
		}
	}
	std::cout << '\n';
}
void task_12()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������������� �������� 7
����� � ��������� ����� �� �������� ������� �� �������� � �������:
- 0 � 1 ���� ����� ����������;
- 2 � 3 ���� ��������;
- 4 � 5 ���� ���������.
	*/
	const int SIZE = 7;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	//0 and 1
	int temp;
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
	//2 and 3
	int sum;
	sum = arr[2] + arr[3];
	arr[2] = sum - arr[2];
	arr[3] = sum - arr[3];
	//4 and 5
	int product;
	product = arr[4] * arr[5];
	arr[4] = product / arr[4];
	arr[5] = product / arr[5];
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_13()
{
	/*
	�� �� ������� ��������, ���� ����� �� ������� ����� � �� ���������
���� ����� � ������� ������ �������.
����������, ���� �����, �� ��������� �������������� ������ �����
�� ���������� ���������� ����� � 2-���� ������ �������.
	*/
	int number = 150;
	const int SIZE = 32;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (number % 2 == 0)
		{
			arr[i] = 0;
		}
		else
		{
			arr[i] = 1;
		}
		number = number / 2;
	}

	std::cout << '\n';
	int z = SIZE;
	int zeroCounter = 0;
	while (arr[z] != 1)
	{
		zeroCounter++;
		z--;
		std::cout << zeroCounter << "\n";
	}
	
	for (int i = SIZE - zeroCounter; i >= 0; i--)
	{

		std::cout << arr[i] << ' ';
	}
}
void task_13_2()
{
	int number;
	std::cin >> number;
	unsigned int mask = 128;
	const int SIZE = 8;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 0;
	}
	int counter = 0;
	while (mask>0)
	{
		//check if this bit is 1
		if (number & mask)
		{
			arr[counter] = 1;
		}
		//right shift the mask
		mask = mask >> 1;
		counter++;
	}
	std::cout << '\n';
	//counting zeroes
	int zeroCounter = 0;
	int elementCounter = 0;
	while (arr[elementCounter] == 0)
	{
		elementCounter++;
		zeroCounter++;
	}
	std::cout << zeroCounter << '\n';
	//print result
	for (int i = zeroCounter ; i < SIZE; i++)
	{
		std::cout << arr[i];
	}
	std::cout << zeroCounter << '\n';
}
void task_14()
{
	/*
	����� ������������� ������� ��������� �����, �������� ������
�����.
�� �� ������� ��������, ���� ����� �� ������� ���� �������� ���
��������� �� ��������� [-2.99..2.99] � ������ ������ �� ������� ��
������.
	*/
	double arr[] = { 7.1,8.5,0.2,3.7,0.99,1.4,-3.5,-110,212,341,1.2 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		if ((arr[i] > -2.99) && (arr[i] < 2.99))
		{
			std::cout << arr[i] << ' ';
		}
	}
	std::cout << '\n';
}
void task_15()
{
	/*
	�� �� ������� ��������, ����� ������� � ��������� ����� ������
�����.
���� �����: �������� ������� ����� 3 �������� �����, �����
��������� �������� ������� ������������ ���� ����.
	*/
	double arr[] = { 7.13, 0.2, 4.9, 5.1, 6.34, 1.12 };
	int length = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (abs(arr[i]) > abs(arr[j]))
			{
				double temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_16()
{
	/*
	�� �� ������� ��������, ���� ����� ������������� �������� 10
������ ����� �� ��������� �� ���������� �� ������� �����:
1. ������� �������������� �����.
2. ������ �������� ��� �������� ��-����� �� -0.231 �� ������� ���
������ �� �������� �� ������� �� + ������� 41.25, � ������ ��������
�������� �� ������� � �������������� ����� ����� ������� �
�������� ������� �����
3. �� �� ������� ���������� �� �������� � ��������������� �����.
4. �� �� ������� �������� �������� �� ������ �������� �� ������
������, ����� �� �������� �� 0.
������: -1.12, -2.43, 3.1, 4.2, 0, 6.4, - 7.5, 8.6, 9.1, -4
�����: 42.25, 45.25, 9.3, 16.8, 0, 38.4, 90.25, 68.8, 81.9,141.25
	*/
	double arr[] = { -1.12, -2.43, 3.1, 4.2, 0, 6.4, -7.5, 8.6, 9.1, -4 };
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < -0.231)
		{
			arr[i] = (i+1)*(i+1) + 41.25;
		}
		else
		{
			arr[i] = arr[i] * (i+1);
		}
	}
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void task_17()
{
	int length;
	std::cin >> length;
	int * arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
	bool checker = true;
	for (int i = 0; i < length-2; i++)
	{
		if ((arr[i] < arr[i+1]) && (arr[i+1] > arr[i+2]))
		{
			checker = true;
		}
		else
		{
			checker = false;
		}
		
	}
	if(checker == true)
	{
		std::cout << "The line is up and down\n";
	}
	else
	{
		std::cout << "The line is NOT up and down\n";
	}
	delete[] arr;
}
void task_18()
{
	/*
	������ �� ��� ��������� ������ � ���������� �����.
	�� �� ������� ��������, ����� �������� ������ ����� � �������
	������� �� ����� ������ � ������� � ����� �����, ��-�������� ��
	����� �����.
	�� �� ������ ������������ � �� ����� ������
	*/
	int arr1[] = { 18, 19, 32, 1, 3, 4, 5, 6, 7, 8 };
	int arr2[] = { 1, 2, 3, 4, 5, 16, 17, 18, 27, 11 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	int * arr3 = new int[length];
	for (int i = 0; i < length; i++)
	{
		if (arr1[i] > arr2[i])
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i];
		}
	}
	for (int i = 0; i < length; i++)
	{
		std::cout << arr3[i] << ' ';
	}
	std::cout << '\n';
}
int main()
{
	task_18();

	return 0;
}
