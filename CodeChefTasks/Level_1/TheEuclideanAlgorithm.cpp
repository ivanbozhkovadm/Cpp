#include<iostream>

int main()
{
	int a = 150, b = 590, c,result;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
		
	}
	result = a;
	std::cout << result << '\n';
	return 0;
}