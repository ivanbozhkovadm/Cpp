/*
PROBLEM:
At the end of each round the leader and her current lead are calculated. 
Once all the rounds are over the player who had the maximum lead at the 
end of any round in the game is declared the winner.
*/
#include<iostream>

int main()
{
	int numberOfRounds,round = 0;
	std::cout << "Enter number of rounds: ";
	std::cin >> numberOfRounds;
	
	int * player1 = new int[numberOfRounds];
	int * player2 = new int[numberOfRounds];
	int * lead = new int[numberOfRounds];
	while (numberOfRounds != 0)
	{
		int score;
		std::cout << "Enter score for Player1 for round " << round + 1 << " : ";
		std::cin >> score;
		player1[round] = score;
		std::cout << "Enter score for Player2 for round " << round + 1 << " : ";
		std::cin >> score;
		player2[round] = score;

		lead[round] = player1[round] - player2[round];

		round++;
		numberOfRounds--;
	}
	for (int i = 0; i < round; i++)
	{
		for (int j = i; j< round; j++)
		{
			if (lead[i] > lead[j])
			{
				int temp;
				temp = lead[i];
				lead[i] = lead[j];
				lead[j] = temp;
			}
			
		}
	}
	std::cout << "Sorted results: ";
	for (int l = 0; l < round; l++)
	{
		std::cout << lead[l] << ' ';
	}
	std::cout << "\n Winner: \n";
	if (lead[round-1] > 0)
	{
		std::cout << "Player1 is a winner with lead of " << lead[round-1] << " !\n";
	}
	else
	{
		std::cout << "Player2 is a winner with lead of " << std::abs(lead[0]) << " !\n";
	}
	delete[] player1;
	delete[] player2;
	delete[] lead;
	return 0;
}