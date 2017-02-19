#ifndef RATIONAL_H
#define	RATIONAL_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Rational
{
private:
	int numer;
	int denom;

public:
	Rational();
	Rational(int);
	Rational(int, int);
	int getNumer() const;
	int getDenom() const;
	void setNumer(int);
	void setDenom(int);
	bool operator<(const  Rational &)const;
	Rational operator+(Rational const &);
	Rational operator-(Rational const &);
	Rational operator*(Rational const &);
	Rational operator/(Rational const &);
	bool operator!=(Rational const &);
	bool operator==(Rational const &);
	bool operator>(Rational const &);

	friend ostream & operator<<(std::ostream &, const  Rational &);
	friend istream & operator>>(std::ostream &, const  Rational &);
	void NormalizeNumber(int, int);
	int greatestCommonDivisor(int, int);
};

int Rational::greatestCommonDivisor(int a, int b)
{
	if (a == 0) return b;
	return greatestCommonDivisor(b % a, a);
}

void Rational::NormalizeNumber(int numer, int denom)
{

	int nod = greatestCommonDivisor(numer, denom);

	if (nod == 0)
	{
		nod = 1;
	}

	if (nod < 0)
	{
		nod = -nod;
	}

	if (denom < 0)
	{
		this->numer /= -nod;
		this->denom /= -nod;
	}
	else
	{
		this->numer /= nod;
		this->denom /= nod;
	}
}

Rational::Rational()
{
	numer = 1;
	denom = 1;
}

Rational::Rational(int num)
{
	numer = num;
	denom = 1;
}

Rational::Rational(int num, int den)
{
	if (den == 0)
	{
		den = 1;
	}
	numer = num;
	denom = den;
	NormalizeNumber(numer, denom);
}

int Rational::getNumer() const
{
	return numer;
}

int Rational::getDenom() const
{
	return denom;
}

void Rational::setNumer(int num)
{
	numer = num;
	NormalizeNumber(numer, this->denom);
}

void Rational::setDenom(int den)
{
	denom = den;
	NormalizeNumber(this->numer, denom);
}

Rational Rational::operator+(Rational const &r1)
{
	Rational newR(r1.getNumer() * this->getDenom() + this->getNumer() * r1.getDenom(), r1.getDenom() * this->getDenom());
	return newR;
}
Rational Rational::operator-(Rational const &r1)
{
	Rational newR(r1.getNumer() * this->getDenom() - this->getNumer() * r1.getDenom(), r1.getDenom() * this->getDenom());
	return newR;
}
Rational Rational::operator*(Rational const &r1)
{
	Rational newR(r1.getNumer() *this->getNumer(), r1.getDenom() * this->getDenom());
	return newR;
}
Rational Rational::operator/(Rational const &r1)
{
	Rational newR(r1.getNumer() *this->getDenom(), r1.getDenom() * this->getNumer());
	return newR;
}

bool Rational::operator<(const Rational & secondNumber)const
{
	bool yes = true;

	double rat1 = double(this->numer) / double(this->denom);
	double rat2 = double(secondNumber.getNumer()) / double(secondNumber.getDenom());

	if (rat1 > rat2)
	{
		yes = false;
	}

	return yes;

}
ostream & operator<<(ostream & ostr, const Rational & number)
{
	if (number.getDenom() != 1 && number.getNumer() != 0)
	{
		ostr << number.getNumer() << '/' << number.getDenom();
	}
	else
	{
		ostr << number.getNumer();
	}
	return ostr;
}
istream & operator>>(istream & istream, Rational & number)
{
	string input, tempNumer, tempDenom;;
	istream >> input;

	int i = 0;
	while (input[i] != '/' && i < input.length())
	{
		tempNumer += input[i];
		i++;
	}
	for (i = i + 1; i < input.length(); i++)
	{
		tempDenom += input[i];
	}

	if (tempDenom == "")
	{
		number.setDenom(1);
	}
	else
	{
		int denom = atoi(tempDenom.c_str());
		number.setDenom(denom);
	}

	int numer = atoi(tempNumer.c_str());


	number.setNumer(numer);


	return istream;
}

bool Rational:: operator!=(Rational const & r1)
{
	bool areNotEqual = false;

	if (r1.getDenom() != this->getDenom() && r1.getNumer() != this->getNumer())
	{
		areNotEqual = true;
	}
	return areNotEqual;
}

bool Rational::operator==(Rational const &r1)
{
	bool areEqual = false;

	if (r1.getDenom() == this->getDenom() && r1.getNumer() == this->getNumer())
	{
		areEqual = true;
	}
	return areEqual;
}

bool Rational::operator>(Rational const & r1)
{
	bool isFirstBigger = false;

	int numer1 = r1.getNumer();
	int numer2 = this->getNumer();
	int denom1 = r1.getNumer();
	int denom2 = this->getDenom();
	if (denom1 != denom2)
	{
		numer1 = r1.getNumer() * this->getDenom();
		numer2 = this->getNumer() * r1.getDenom();
	}
	if (numer1 > numer2)
	{
		isFirstBigger = true;
	}

	return isFirstBigger;
}

#endif // RATIONAL_H

