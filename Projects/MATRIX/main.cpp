#include<string>
#include<iostream>
#include<sstream>
#include<math.h>
#include <fstream>


#include "Rational.h"
#include "ComplexNumbers.h"
#include "Matrix.h"
#include "Calculations.h"
#include "Menu.h"
ofstream result;

using namespace std;

//Version with simple menu
/*
Matrix* templateForSumAndSubstract()
{

	Matrix matricesArr[2] = {};
	cout << "Matrix 1" << endl;
	Matrix m1;
	cin >> m1;
	cout << "Martix 2" << endl;
	Matrix m2(m1.getRow(), m1.getCol());
	cin >> m2;
	cout << "M1:" << endl << m1 << endl << "M2:" << endl << m2 << endl;
	result << "M1:" << endl << m1 << endl << "M2:" << endl << m2 << endl;

	matricesArr[0] = m1;
	matricesArr[1] = m2;
	return matricesArr;
}

void Sum()
{
	Matrix m1, m2;
	Matrix *arr = templateForSumAndSubstract();
	m1 = arr[0];
	m2 = arr[1];
	cout << "M1+M2= " << endl << m1 + m2 << endl;
	result << "M1+M2= " << endl << m1 + m2 << endl;

}
void Substract()
{
	Matrix m1, m2;
	Matrix *arr = templateForSumAndSubstract();
	m1 = arr[0];
	m2 = arr[1];
	cout << "M1-M2 = " << endl << m1 - m2 << endl;
	result << "M1-M2 = " << endl << m1 - m2 << endl;

}
void Multiply()
{
	Matrix m1;
	cout << "Matrix 1" << endl;
	cin >> m1;
	cout << "Martix 2" << endl;
	int col;
	cout << "Rows: " << m1.getRow() << endl;
	cout << "Cols: ";
	cin >> col;
	Matrix m2(m1.getRow(), col);
	cin >> m2;
	cout << "Matrix 1:" << endl << m1 << endl << "Matrix 2:" << endl << m2 << endl;
	result << "Matrix 1:" << endl << m1 << endl << "Matrix 2:" << endl << m2 << endl;
	cout << "M1*M2 = " << endl << m1*m2;
	result << "M1*M2 = " << endl << m1*m2;

}
void MultiplyWithNumber()
{
	Matrix m1;
	cout << "Matrix:" << endl;
	cin >> m1;
	cout << "Number" << endl;
	ComplexNumbers number;
	cin >> number;
	cout << "M:" << endl << m1 << endl;
	result << "M:" << endl << m1 << endl;
	cout << "M*(number) = " << endl << m1*number;
	result << "M*(number) = " << endl << m1*number;

}
void Determinant()
{
	cout << "Dimension:(rows and cols are equal): ";
	int dim;
	cin >> dim;
	Matrix m(dim, dim);
	Calculations calc;
	cin >> m;
	cout << "M: " << endl << m;
	result << "M: " << endl << m;
	cout << "Determinant: " << calc.determinant(m) << endl;
	result << "Determinant: " << calc.determinant(m);
}
void Transposed()
{
	cout << "Dimension:(rows and cols are equal): ";
	int dim;
	cin >> dim;
	Matrix m(dim, dim);
	Calculations calc;
	cin >> m;
	cout << "M: " << endl << m << endl;
	result << "M: " << endl << m << endl;
	cout << "Transposed Matrix: " << endl << calc.transposed(m);
	result << "Transposed Matrix: " << endl << calc.transposed(m);
}
void Inversed()
{
	cout << "Dimension:(rows and cols are equal): ";
	int dim;
	cin >> dim;
	Matrix m(dim, dim);
	Calculations calc;
	cin >> m;
	cout << "M: " << endl << m << endl;
	result << "M: " << endl << m << endl;
	cout << "Inversed Matrix: " << endl << calc.inverse(m);
	result << "Inversed Matrix: " << endl << calc.inverse(m);
}

void Equation()
{
	cout << "You want to solve matrix equation from type AX=B. Please insert Matrix A and B" << endl;
	int dim, col;
	cout << "Dimention of matrix A: ";
	cin >> dim;
	Matrix m1(dim, dim);
	Calculations calc;
	cout << "Matrix A" << endl;
	cin >> m1;
	cout << m1 << endl;
	cout << "Rows of matrix B: " << dim << endl;
	cout << "Cols of matrix B: ";
	cin >> col;
	Matrix m2(dim, col);
	cout << "Matrix B " << endl;
	cin >> m2;
	cout << m2 << endl;
	result << "Matrix A: " << endl << m1 << endl << "Matrix 2:" << endl << m2 << endl;
	cout << "Matrix X = " << endl;
	result << "Matrix X = " << endl;
	cout << calc.matrixEquation(m1, m2);
	result << calc.matrixEquation(m1, m2);

}

void Choices()
{
	cout << "MENU" << endl;
	result << "MENU" << endl;
	cout << "Enter the number of the operation you want" << endl;
	result << "Enter the number of the operation you want" << endl;
	cout << "1. Sum" << endl;
	result << "1. Sum" << endl;
	cout << "2. Substract" << endl;
	result << "2. Substract" << endl;
	cout << "3. Multiply" << endl;
	result << "3. Multiply" << endl;
	cout << "4. Multiply by number" << endl;
	result << "4. Multiply by number" << endl;
	cout << "5. Determinant" << endl;
	result << "5. Determinant" << endl;
	cout << "6. Transposed matrix" << endl;
	result << "6. Transposed matrix" << endl;
	cout << "7. Inversed matrix" << endl;
	result << "7. Inversed matrix" << endl;
	cout << "8. Matrix equation AX=B" << endl;
	result << "8. Matrix equation AX=B" << endl;
	cout << "0.exit" << endl;
	result << "0.exit" << endl;
}

void Menu()
{
	Choices();
	int input;
	cin >> input;
	result << endl << "input: " << input << endl;

	if (input != 0)
	{
		while (input != 0)
		{
			switch (input)
			{
			case 1:Sum(); break;
			case 2:Substract(); break;
			case 3: Multiply(); break;
			case 4:MultiplyWithNumber(); break;
			case 5:Determinant(); break;
			case 6: Transposed(); break;
			case 7: Inversed(); break;
			case 8:Equation(); break;
			default:exit(0); break;
			}
			cout << endl;
			cout << "What do u want to do next?" << endl;
			cout << "Press any key to go back to the menu" << endl << "0. Exit" << endl;
			cin >> input;
			result << "input: " << input << endl;
			if (input != 0)
			{
				Choices();
				cin >> input;
				result << "input: " << input << endl;
			}
		}
	}
}



*/

int main()
{
	result.open("result.txt", ios::app);
	Action();
	result.close();

	return 0;
}

