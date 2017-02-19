#include<iostream>
#include<string>
#include<stack>

int main()
{
	std::string input;
	std::cout << "Please, enter your expression: ";
	std::cin >> input;

	std::stack<char> stack;
	std::string result;
	char temporaryChar;
	int balanceBrackets = 1;
	int position = 0;
	while (balanceBrackets > 0)
	{
		position++;
		temporaryChar = input[position];
		if (temporaryChar=='(')
		{
			balanceBrackets++;
		}
		else if (temporaryChar == '+' || temporaryChar == '*' || temporaryChar == '-' || temporaryChar == '/')
		{
			stack.push(temporaryChar);
		}
		else if(temporaryChar == ')')
		{
			balanceBrackets--;
			result = result + stack.top();
			stack.pop();
		}
		else
		{
			result = result + temporaryChar;
		}
	}
	std::cout << "The result is: " << result << '\n';
	
	return 0;
}