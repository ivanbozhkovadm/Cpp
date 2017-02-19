#ifndef MATRIX_H
#define	MATRIX_H


using namespace std;

class Matrix
{
private:
	ComplexNumbers **matrix;
	int row;
	int col;
public:

	Matrix();
	Matrix(int, int);

	int getRow() const;
	int getCol() const;
	ComplexNumbers **getMatrix()const;

	void setRow(int);
	void setCol(int);
	void setMatrix(ComplexNumbers**);

	Matrix operator+(const Matrix &);
	Matrix operator-(const Matrix &);
	Matrix operator*(const Matrix &);
	Matrix operator*(ComplexNumbers);

	ComplexNumbers operator()(int, int);

	friend istream & operator>>(istream &, Matrix &);
	friend ostream & operator<<(ostream &, const Matrix &);
};

//Function for creating two-sized array to hold the matrix
ComplexNumbers** CreateMatrix(int row, int col)
{
	ComplexNumbers **m = new ComplexNumbers*[row];
	ComplexNumbers zero(0, 0);

	for (int r = 0; r < row; r++)
	{
		m[r] = new ComplexNumbers[col];
		for (int c = 0; c < col; c++)
		{
			m[r][c] = zero;
		}
	}

	return m;
}

//Constructors
Matrix::Matrix()
{
	this->row = 0;
	this->col = 0;
	this->matrix = 0;
}

Matrix::Matrix(int row, int col)
{
	this->row = row;
	this->col = col;
	this->matrix = CreateMatrix(row, col);
}

int Matrix::getRow() const
{
	return this->row;
}
int Matrix::getCol() const
{
	return this->col;
}

ComplexNumbers** Matrix::getMatrix() const
{
	return this->matrix;
}

void Matrix::setRow(int r)
{
	row = r;
}
void Matrix::setCol(int c)
{
	col = c;
}
void Matrix::setMatrix(ComplexNumbers **m)
{
	matrix = m;
}

//Overriding +,-,*
Matrix Matrix:: operator+(const Matrix & second)
{
	Matrix newM(this->getRow(), this->getCol());

	for (int r = 0; r < getRow(); r++)
	{
		for (int c = 0; c < this->getCol(); c++)
		{
			newM.getMatrix()[r][c] = this->getMatrix()[r][c] + second.getMatrix()[r][c];
		}
	}

	return newM;
}

Matrix Matrix:: operator-(const Matrix & second)
{
	Matrix newM(this->getRow(), this->getCol());

	for (int r = 0; r < this->getRow(); r++)
	{
		for (int c = 0; c < this->getCol(); c++)
		{
			newM.getMatrix()[r][c] = this->getMatrix()[r][c] - second.getMatrix()[r][c];
		}
	}

	return newM;
}

Matrix Matrix:: operator*(const Matrix & second)
{
	Matrix newM(this->getRow(), second.getCol());

	for (int r = 0; r < this->getRow(); r++)
	{
		for (int c = 0; c < second.getCol(); c++)
		{
			ComplexNumbers elem(Rational(0, 0), Rational(0, 0));
			for (int i = 0; i < this->getCol(); i++)
			{
				elem = elem + this->getMatrix()[r][i] * second.getMatrix()[i][c];

			}
			newM.getMatrix()[r][c] = elem;
		}
	}

	return newM;
}

Matrix Matrix:: operator*(ComplexNumbers number)
{
	Matrix newM(this->getRow(), this->getCol());

	for (int r = 0; r < this->getRow(); r++)
	{
		for (int c = 0; c < this->getCol(); c++)
		{
			newM.getMatrix()[r][c] = this->getMatrix()[r][c] * number;
		}
	}

	return newM;
}

//Access to a certain element
ComplexNumbers Matrix::  operator()(int row, int col)
{
	return this->getMatrix()[row - 1][col - 1];
}

//override << and >>
std::ostream & operator<<(std::ostream & ostream, const Matrix &number)
{
	for (int r = 0; r < number.getRow(); r++)
	{
		for (int c = 0; c < number.getCol(); c++)
		{
			ostream << number.getMatrix()[r][c] << "  ";
		}
		ostream << endl;
	}

	return ostream;
}

std::istream & operator>>(std::istream & istream, Matrix & number)
{
	if (number.getRow() == 0 || number.getCol() == 0)
	{
		int row, col;
		cout << "Rows: ";
		istream >> row;
		number.setRow(row);
		cout << "Cols: ";
		istream >> col;
		number.setCol(col);
	}

	cout << "Your matrix has " << number.getRow() << " rows and " << number.getCol() << " cols." << endl << "Insert elements now: " << endl;

	ComplexNumbers **m = new ComplexNumbers*[number.getRow()];

	for (int r = 0; r < number.getRow(); r++)
	{
		m[r] = new ComplexNumbers[number.getCol()];
		for (int c = 0; c < number.getCol(); c++)
		{
			ComplexNumbers tempNumber;
			istream >> tempNumber;
			m[r][c] = tempNumber;
		}
	}

	number.matrix = m;

	return istream;
}

#endif
