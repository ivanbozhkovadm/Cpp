#include<iostream>

int task_1(int number)
{	
	/*
	�� �� ������� ��������, ����� ��������� N-���� ����� �� ��������.
������� � ������� ����� �� �������� �� 1-��, ����� �������� � �����
�� ����� �� ����������� 2.
	*/
		if (number == 1)
		{
			return 1;
		}
		if (number == 2)
		{
			return 1;
		}
		return task_1(number - 1) + task_1(number - 2);
}
int task_2(int a, int b)
{
	/*
	�� �� ������� ��������, ����� ��������� ������������ �� ���
���������� ����� =>2, ���� �� �������� ���� ��������.
	*/
	if ((a == 0) | (b == 0) )
	{
		return 0;
	}
	if (a == 1)
	{
		return b;
	}
	return task_2(a - 1, b) + b;
}


int main()
{
	
	return 0;
}