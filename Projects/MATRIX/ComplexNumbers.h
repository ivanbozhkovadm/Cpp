#include <string>
#include <iostream>
#include <sstream>


#ifndef COMPLEXNUMBERS_H
#define	COMPLEXNUMBERS_H
class ComplexNumbers
{
private:
	Rational r;
	Rational i;
public:
	ComplexNumbers();
	ComplexNumbers(Rational a, Rational i);
	void setR(Rational);
	void setI(Rational);
	Rational getR() const;
	Rational getI() const;

	ComplexNumbers operator+(const ComplexNumbers &);
	ComplexNumbers operator-(const ComplexNumbers &);
	ComplexNumbers operator*(const ComplexNumbers &);
	ComplexNumbers operator*(Rational number);
	ComplexNumbers operator/(const ComplexNumbers &);

	ComplexNumbers changeSigns();

	friend istream & operator>>(istream &, ComplexNumbers &);

	friend ostream & operator<<(ostream &, const ComplexNumbers &);
};

//Constuctors
ComplexNumbers::ComplexNumbers()
{
	this->r = 0;
	this->i = 0;
}
ComplexNumbers::ComplexNumbers(Rational real, Rational imaginery)
{
	this->r = real;
	this->i = imaginery;

}
//Setters
void ComplexNumbers::setR(Rational r)
{
	this->r = r;
}

void ComplexNumbers::setI(Rational i)
{
	this->i = i;
}

//Getters
Rational ComplexNumbers::getR() const
{
	return this->r;
}

Rational ComplexNumbers::getI() const
{
	return this->i;
}

//Override +,-,*,/
ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers & secondCN)
{
	ComplexNumbers result;
	result.r = this->r + secondCN.getR();
	result.i = this->i + secondCN.getI();
	return result;
}

ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers & secondCN)
{
	ComplexNumbers result;
	result.r = this->r - secondCN.getR();
	result.i = this->i - secondCN.getI();
	return result;
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers & secondCN)
{
	ComplexNumbers result;
	result.r = (this->r) * secondCN.getR() - ((this->i) * secondCN.getI());
	result.i = (this->r) * secondCN.getI() + (this->i) * secondCN.getR();
	return result;
}

ComplexNumbers ComplexNumbers::operator*(Rational number)
{
	ComplexNumbers result;
	result.r = (this->r) * number;
	result.i = (this->i) * number;
	return result;
}

ComplexNumbers ComplexNumbers::operator/(const ComplexNumbers & secondCN)
{
	ComplexNumbers result;

	result.r = ((this->r) * secondCN.getR() + ((this->i) * (secondCN.getI()))) / (secondCN.getR() * secondCN.getR() + secondCN.getI() * secondCN.getI());
	result.i = ((this->i) * secondCN.getR() - (this->r) * secondCN.getI()) / (secondCN.getR() * secondCN.getR() + secondCN.getI() * secondCN.getI());
	return result;
}

//function for changing sign of the complex number
ComplexNumbers ComplexNumbers::changeSigns()
{
	this->r = (this->r) * Rational(-1, 1);
	this->i = (this->i) * Rational(-1, 1);
	return (*this);
}

//override << and >>
ostream & operator<<(ostream & ostream, const ComplexNumbers & variable)
{
	if (variable.getR().getNumer() == 0 && variable.getI().getNumer() == 0)
	{
		ostream << "(" << 0 << ")";
	}
	else
	{
		ostream << "( ";

		if (variable.getR().getNumer() != 0)
		{
			ostream << variable.getR();

			if (variable.getI().getNumer() != 0)
			{
				if ((variable.getI().getNumer() > 0 && variable.getI().getDenom() > 0) || (0 > variable.getI().getNumer() && 0 > variable.getI().getDenom()))
				{
					ostream << " + ";
				}

				ostream << variable.getI() << "i";
			}
		}
		else
		{
			ostream << variable.getI() << "i";
		}

		ostream << " )";
	}

	return ostream;
}

istream& operator>>(istream& istream, ComplexNumbers & number)
{
	string input;
	istream >> input;
	stringstream ss;

	if (input == "i")
	{
		number.setR(0);
		number.setI(1);
	}
	else if (input == "-i")
	{
		number.setR(0);
		number.setI(-1);
	}
	else
	{
		//change the format from "a+bi" to "a + b i "
		if (input[0] != '-')
		{
			input.insert(0, "+");
		}
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '-')
			{
				if (i == 0)
				{
					input.replace(i, 1, "- ");
				}
				else
				{
					input.replace(i, 1, " - ");
				}

				i += 2;
			}
			if (input[i] == '+')
			{
				if (i == 0)
				{
					input.replace(i, 1, "+ ");
				}
				else
				{
					input.replace(i, 1, " + ");
				}

				i += 2;
			}
			if (input[i] == 'i')
			{
				input.replace(i, 1, " i ");
				i += 2;
			}
		}

		Rational realPart, imPart;
		char signR = '/0';
		char signI = '/0';

		ss << input;
		ss >> signR >> realPart >> signI >> imPart;

		switch (signR)
		{
		case '-':
			number.setR(realPart * (-1));
			break;
		default:
			number.setR(realPart);
			break;
		}

		switch (signI)
		{
		case 'i':
			number.setR(0);
			if (signR == '-')
			{
				number.setI(realPart * (-1));
			}
			else
			{
				number.setI(realPart);
			}
			break;
		case '-':
			if (imPart == 0)
			{
				imPart = 1;
			}
			number.setI(imPart * (-1));
			break;
		case '0':

			number.setI(0);
			break;
		default:
			if (imPart == 0)
			{
				imPart = 1;
			}
			number.setI(imPart);
			break;
		}
	}

	return istream;
}

#endif // COMPLEXNUMBERS_H
