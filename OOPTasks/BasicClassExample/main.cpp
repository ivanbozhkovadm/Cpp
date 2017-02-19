#include<iostream>
using namespace std;
#include"rectangle.hpp"
#include "cylinder.hpp" 
#include "overloadingVector.hpp"
#include "exampleThis.hpp"

int main()
{
	printCylinder();
	cout << "\n";
	displayRectangle();
	cout << "\n";
	displayCVector();
	cout << "\n";
	displayTimer();
	return 0;
}