﻿/*
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
------------------------------------------------------------------------------------------------------
Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A
★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
-------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

void Solution()
{
	unsigned short score;
	cout << "Enter your score:";
	cin >> score;
	/*
	if (score == 100)
	{
	cout << "Congratulations!" << endl;
	}
	*/
	if (score >= 0 && score <= 59)
	{
		cout << "F" << endl;
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "D" << endl;
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "C" << endl;
	}
	else if (score >= 80 && score <= 89)
	{
		cout << "B" << endl;
	}
	else if (score >= 90 && score <= 100)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "Incorrect input"<< endl;
	}
}

int main()
{
	Solution();

	return 0;
}

