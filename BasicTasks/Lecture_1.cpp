#include<iostream>

void task_1()
{
	/*
	Да се изведат съобщения към потребителя и да се прочетат 2 числа от
клавиатурата A и B (може да са с плаваща запетая – double).
После да се прочете 3-то число C и да се провери дали то е м/у A и B.
Да се изведе подходящо съобщение за това дали C е между A и B.
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
	Въведете 2 различни целочислени числа от конзолата. Запишете
тяхната сума, разлика, произведение, остатък от деление и
целочислено деление в отделни променливи и разпечатайте тези
резултати в конзолата. Опитайте същото с числа с плаваща запетая.
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
	Въведете 2 различни числа от конзолата и разменете стойността им.
Разпечатайте новите стойности
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
	Въведете 2 различни числа от конзолата и ги разпечатайте в
нарастващ ред.
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
	Въведете 3 различни числа от конзолата и ги разпечатайте в низходящ
ред.
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
	Въведете 3 числа от клавиатурата а1, а2 и а3. Разменете стойностите
им така, че а1 да има стойността на а2, а2 да има стойността на а3, а
а3 да има старата стойност на а1.
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
	Въведете 3 променливи от клавиатурата – час (целочислен тип), сума
пари (число с плаваща запетая), дали съм здрав – булев тип.
Съставете програма, която взема решения на базата на тези данни по
следния начин:
 - ако съм болен, няма да излизам
 - ако имам пари, ще си купя лекарства
 - ако нямам – ще стоя вкъщи и ще пия чай
 - ако съм здрав, ще отида на кино с приятели
 - ако имам по-малко от 10 лв, ще отида на кафе.
Полученото решение покажете като съобщение в конзолата.
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
	Да се състави програма, която чете от конзолата 4-цифренo
естествено число от интервала [1000.. 9999]. От това число се
формират 2 нови 2-цифрени числа. Първото число се формира от 1-та
и 4-та цифра на въведеното число. Второто число се формира от 2-рa -
3-та цифра на въведеното число. Като резултат да се изведе дали 1-то
ново число e по-малко <, равно = или по-голямо от 2-то число.
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
	Да се състави програма, която чете от конзолата 2 естествени
двуцифрени числа a,b.
Програмата да изведе в конзолата дали последната цифра от
произведението на двете числа е четна, както и самата цифра. 
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
	Трябва да се напълни цистерна с вода. Имате 2 кофи с вместимост 2 и
3 литра и ги ползвате едновременно.
Да се състави програма, която по даден обем извежда как ще прелеете
течността с тези кофи, т.е. по-колко пъти ще се пълни всяка от
кофите. Кофите не могат да се ползват с частично количество вода.
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
	Съставете програма, която по дадено трицифренo число проверява
дали числото се дели на всяка своя цифра. Във въведеното число да
няма цифра 0.
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
	Високосни години са всички години кратни на 4 с изключения
столетията, но без столетия кратни на 400, т.е. 1900 не е високосна,
но 1600 и 2000 са високосни.
Съставете програма, която по дадени ден, месец, година отпечатва
следващата дата.
	*/
	int day, month, year;
	bool isBissextile;
	
}
void task_13()
{
	/*
	Да се състави програма, която да отгатне колко е студено/топло по
въведената температура t в градус Целзий.
Температурните интервали са:
под -20 ледено студено;
между 0 и -20 - студено;
между 15 и 0 - хладно;
между 25 и 15 - топло;
над 25 – горещо.
Входни данни: цяло число от интервала [-100..100].
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
	Да се състави програма, която по въведени координати на 2 позиции
от шахматната дъска извежда отговор дали са оцветени в еднакъв или
различен цвят.Шахматната дъска е квадратна.
Въвеждат се две двойки числа от интервала [1..8].
Пример: 2 2 3 2
Изход: Позициите са с различен цвят
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
	Да се състави програма, която въвежда естествено число от интервала
[0..24].
Програмата да изведе съответстващо съобщение съобразно въведения
час.
Периодите са:
[18..4] - Добър вечер;
[4..9] - Добро утро;
[9..18] - Добър ден
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
	Въведено е трицифрено естествено число от вида abc.
Трябва да се провери дали:
ако a = b = c - Изход: цифрите са равни;
ако a>b>c - Изход: цифрите са във възходящ ред;
ако a<b<c цифрите са в низходящ ред;
и изход: цифрите са ненаредени, за неописаните случаи.
Да се състави програма, която извежда резултата от проверката за
наредба на цифрите в числото.
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
