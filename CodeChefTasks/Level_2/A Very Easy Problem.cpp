/*
Output some form of these numbers: 137, 1315, 73, 136, 255, 1384, 16385, one per line in the listed order.
*/
#include<iostream>
#include<fstream>
int main()
{
	int values[] = { 137, 1315, 73, 136, 255, 1384, 16385 };
	std::ofstream myFile;
	myFile.open("myFile.txt");
	for (int i = 0; i < 7; i++)
	{
		myFile << values[i] << '\n';
	}
	myFile.close();

	return 0;
}