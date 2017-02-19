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
	/*Нека по въведен масив да се конструира нов, като половината му
елементи са точно като на оригиналния, а другите да са тези
елементи, но в обратен ред. Последно, да се изведе новия масив
на екрана.
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
Да се въведе число, след което да се създаде масив с 10
елемента по следния начин:
Първите 2 елемента на масива са въведеното число.
Всеки следващ елемент на масива е равен на сбора от
предишните 2 елемента в масива.
След това изведете масива .
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
	Да се прочете масив и да се отпечата дали е огледален.
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
	Напишете програма, която създава масив с 10 елемента и
инициализира всеки от елементите със стойност равна на индекса на
елемента умножен по 3.
Да се изведат елементите на екрана.
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
	Напишете програма, която първо чете 2 масива и после извежда
съобщение дали са еднакви, и дали са с еднакъв размер.
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
	Напишете програма, която първо чете масив и после създава нов
масив със същия размер по следния начин: стойността на всеки
елемент от втория масив да е равна на сбора от предходния и
следващият елемент на съответния елемент от първия масив.
Да се изведе получения масив.
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
	Напишете програма, която намира и извежда най-дългата редица от
еднакви поредни елементи в даден масив.
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
	Напишете програма, в която потребителя въвежда масив, след което
елементите на масива се обръщат в обратен ред (Целта не е масива да
се отпечата в обратен ред, ами първо да се обърне, след което да се
отпечата в нормален ред). Пробвайте да решите задачата първо с един
допълнителен масив и после без да използвате друг масив.
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
	Да се състави програма, която въвежда от клавиатурата 7 цели числа
в едномерен масив
Програмата да изведе всички числа кратни на 5, но по големи от 5.
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
	Да се състави програма, чрез която по предварително въведени 7
числа в едномерен масив се разменят местата на елементи с индекси:
- 0 и 1 чрез трета променлива;
- 2 и 3 чрез събиране;
- 4 и 5 чрез умножение.
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
	Да се състави програма, чрез която се въвежда число и се представя
като число в двоична бройна система.
Програмата, чрез масив, да изчислява последователно всички цифри
на въведеното естествено число в 2-ична бройна система.
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
	Имате предварително въведен едномерен масив, съдържащ реални
числа.
Да се състави програма, чрез която се избират само елементи със
стойности от интервала [-2.99..2.99] и новата редица се извежда на
екрана.
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
	Да се състави програма, която въвежда в едномерен масив реални
числа.
Като изход: програма извежда онези 3 различни числа, чиято
абсолютна стойност формира максималната обща сума.
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
	Да се състави програма, чрез която предварително въведени 10
реални числа от интервала се обработват по следния начин:
1. Извежда съществуващите числа.
2. Всички елементи със стойност по-малки от -0.231 се заменят със
сумата от квадрата на индекса им + числото 41.25, а всички останали
елементи се заменят с произведението между самия елемент и
неговият пореден номер
3. Да се изведат елементите от началния и новообразувания масив.
4. Да се изведат средната стойност на всички елементи от новата
редица, които са различни от 0.
Пример: -1.12, -2.43, 3.1, 4.2, 0, 6.4, - 7.5, 8.6, 9.1, -4
Изход: 42.25, 45.25, 9.3, 16.8, 0, 38.4, 90.25, 68.8, 81.9,141.25
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
	Дадени са два едномерни масива с естествени числа.
	Да се състави програма, която сравнява всички числа с еднакви
	индекси от двата масива и записва в трети масив, по-голямото от
	двете числа.
	Да се изведе съдържанието и на трите масива
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
