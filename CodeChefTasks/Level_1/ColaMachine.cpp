/*
Cola Machine
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."

*/


#include<iostream>
using namespace std;

void Solution()
{
	cout << "------\n MENU \n------\n";
	cout << " 1.Water\n 2.Cola\n 3.Fanta\n 4.Tea\n 5.Sprite\n";
	cout << "Pleace, choose a beverage by entering a number 1-5\n";
	unsigned short int number = 0;
	cin >> number;
	switch (number)
	{
	case 1: cout << "You choose Water\n"; break;
	case 2: cout << "You choose Cola\n"; break;
	case 3: cout << "You choose Fanta\n"; break;
	case 4: cout << "You choose Tea\n"; break;
	case 5: cout << "You choose Sprite\n"; break;
	default:
		cout << "Error. choice was not valid, here is your money back.\n";
		break;
	}

}

int main()
{
	Solution();


	return 0;
}