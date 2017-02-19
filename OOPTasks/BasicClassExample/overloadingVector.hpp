#ifndef __OVERLOADING_VECTOR_HPP__
#define __OVERLOADING_VECTOR_HPP__

class CVector
{
public:
	int x, y;
	CVector() {};
	CVector(int a, int b) : x(a), y(b) {};
	CVector operator + (const CVector&);
	CVector operator = (const CVector&);
};
CVector CVector::operator=(const CVector& rightVector)
{
	x = rightVector.x;
	y = rightVector.y;
	return *this;
}
CVector CVector::operator+(const CVector& parameter)
{
	CVector temp;
	temp.x = x + parameter.x;
	temp.y = y + parameter.y;
	return temp;
}

CVector operator-(const CVector& leftParameter, const CVector rightParameter)
{
	CVector temp;
	temp.x = leftParameter.x - rightParameter.x;
	temp.y = leftParameter.y - rightParameter.y;
	return temp;
}

void displayCVector()
{
	CVector first(1, 8);
	CVector second(2, 2);
	CVector result;
	result = first + second;
	cout << "Result X(+): " << result.x << '\n'
		<< "Result Y(+): " << result.y << '\n';
	result = first - second;
	cout << '\n';
	cout << "Result X(+): " << result.x << '\n'
		<< "Result Y(+): " << result.y << '\n';
}
#endif 