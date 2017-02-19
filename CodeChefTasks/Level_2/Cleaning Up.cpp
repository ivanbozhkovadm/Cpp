/*
https://www.codechef.com/problems/CLEANUP
*/

#include<iostream>
#include<vector>

int main()
{
	std::cout << "Number of all tasks: ";
	int numberOfTasks;
	std::cin >> numberOfTasks;
	std::cout << "Number of compleated tasks: ";
	int numberOfCompleatedTasks;
	std::cin >> numberOfCompleatedTasks;
	
	bool * tasksArray = new bool [numberOfTasks];
	std::cout << "Please enter compleated tasks: ";
	for (int j = 0; j < numberOfCompleatedTasks; j++)
	{
		int completeTask;
		std::cin >> completeTask;
		tasksArray[completeTask-1] = true;
	}
	
	std::vector<int> chef;
	std::vector<int> assistent;
	bool flag = true;
	for (int i = 0; i < numberOfTasks; i++)
	{
		if (tasksArray[i] != true)
		{
			if (flag == true)
			{
				chef.push_back(i + 1);
				flag = false;
			}
			else
			{
				assistent.push_back(i + 1);
				flag = true;
			}
		}
	}
	
	int chefSize = chef.size();
	int assistentSize = assistent.size();
	std::cout << "\nChef Tasks: ";
	for (int i = 0; i < chefSize; i++)
	{
		std::cout << chef[i] << ' ';
	}
	std::cout << "\nAssistent tasks: ";
	for (int i = 0; i < assistentSize; i++)
	{
		std::cout << assistent[i];
	}
	std::cout << '\n';
	return 0;
}
