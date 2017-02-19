/*
Pooja would like to withdraw X $US from an ATM. 
The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction
(including bank charges). For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.
*/
#include<iostream>
#include<iomanip>

int main()
{
	const double tax = 0.5;
	unsigned int withdrawMoney = 0;
	double moneyBalance = 0;
	std::cout << "How many $ you want to withdraw? \n";
	std::cin >> withdrawMoney;
	std::cout << "How many $ you have in account? \n";
	std::cin >> moneyBalance;
	if (withdrawMoney % 5 == 0 && moneyBalance > withdrawMoney)
	{
		moneyBalance = moneyBalance - withdrawMoney - tax;
		std::cout<<std::fixed;
		std::cout<<std::setprecision(2);
		std::cout << "Withdraw money: " << withdrawMoney << '\n' ;
		std::cout << "Balance: " << moneyBalance << '\n';
	}
	else
	{
		std::cout <<moneyBalance << '\n';
	}

	return 0;
}