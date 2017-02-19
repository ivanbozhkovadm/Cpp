#ifndef CALCULATIONS_H
#define	CALCULATIONS_H
#include "Matrix.h"
#include<iostream>

using namespace std;
class Calculations
{
public:
	Calculations();
	Matrix transposed(Matrix);
	ComplexNumbers determinant(Matrix &);
	Matrix inverse(Matrix m);
	Matrix matrixEquation(Matrix, Matrix);
};

Calculations::Calculations()
{
}

//Transposed
Matrix Calculations::transposed(Matrix m)
{
	Matrix transposedM(m.getCol(), m.getRow());

	for (int r = 0; r < transposedM.getRow(); r++)
	{
		for (int c = 0; c < transposedM.getCol(); c++)
		{
			transposedM.getMatrix()[r][c] = m.getMatrix()[c][r];
		}
	}

	return transposedM;
}

//Adjugated Matrix
Matrix adjugate(ComplexNumbers **matrixArr, int dim, int choosenCol, int choosenRow)
{
	ComplexNumbers **temp = new ComplexNumbers*[dim - 1];
	for (int r = 0, rowOfNewM = 0; r < dim; r++)
	{
		if (choosenRow != r)
		{
			temp[rowOfNewM] = new ComplexNumbers[dim - 1];
			for (int c = 0, colOfNewM = 0; c < dim; c++)
			{
				if (choosenCol != c)
				{
					temp[rowOfNewM][colOfNewM] = matrixArr[r][c];
					colOfNewM++;
				}
			}
			rowOfNewM++;
		}
	}

	Matrix adjugatedM(dim - 1, dim - 1);
	adjugatedM.setMatrix(temp);

	return adjugatedM;
}
//Determinant

ComplexNumbers det(ComplexNumbers **matrixArr, int dim)
{
	Matrix m(dim, dim);
	m.setMatrix(matrixArr);
	ComplexNumbers determinant;

	if (dim == 1)
	{
		determinant = m(1, 1);
	}
	if (dim == 2)
	{
		determinant = m(1, 1) * m(2, 2) - m(1, 2) * m(2, 1);
	}
	else if (dim == 3)
	{
		determinant = m(1, 1) * m(2, 2) * m(3, 3) + m(1, 2) * m(2, 3) * m(3, 1) + m(1, 3) * m(2, 1) * m(3, 2)
			- m(1, 3) * m(2, 2) * m(3, 1) - m(3, 2) * m(2, 3) * m(1, 1) - m(3, 3) * m(2, 1) * m(1, 2);
	}
	else
	{
		for (int choosenCol = 0; choosenCol < dim; choosenCol++)
		{
			ComplexNumbers choosenEl = m(1, choosenCol + 1);

			Matrix temp = adjugate(matrixArr, dim, choosenCol, 0);

			ComplexNumbers curDet = det(temp.getMatrix(), dim - 1);
			if ((1 + choosenCol) % 2 == 0)
			{
				determinant = determinant - choosenEl * curDet;
			}
			else
			{
				determinant = determinant + choosenEl * curDet;
			}
		}
	}

	return determinant;
}

ComplexNumbers Calculations::determinant(Matrix &m)
{
	int dim = m.getRow();

	ComplexNumbers **matrixArr = m.getMatrix();

	return det(matrixArr, dim);
}

//Inverse Matrix

Matrix Calculations::inverse(Matrix m)
{
	ComplexNumbers det = this->determinant(m);
	int dim = m.getRow();
	Matrix transposedMatrix = this->transposed(m);
	Matrix inversed(dim, dim);

	for (int r = 0; r < m.getRow(); r++)
	{
		for (int c = 0; c < m.getCol(); c++)
		{
			Matrix adjugatedMatrix = adjugate(transposedMatrix.getMatrix(), dim, c, r);
			ComplexNumbers adjugatedArray = this->determinant(adjugatedMatrix);

			if ((r + c) % 2 == 0)
			{
				inversed.getMatrix()[r][c] = adjugatedArray / det;
			}
			else
			{
				inversed.getMatrix()[r][c] = adjugatedArray.changeSigns() / det;
			}
		}
	}

	return inversed;
}

//Matrix equations
Matrix Calculations::matrixEquation(Matrix A, Matrix B)
{
	return this->inverse(A) * B;
}
#endif // CALCULATIONS_H

