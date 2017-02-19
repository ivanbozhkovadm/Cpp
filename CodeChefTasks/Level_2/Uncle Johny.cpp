/*
https://www.codechef.com/problems/JOHNY
*/
#include<iostream>

int main()
{
	int numberOfSongs;
	std::cout << "Number of songs: ";
	std::cin >> numberOfSongs;
	int * playlist = new int[numberOfSongs];
	int mySongPosition;
	std::cout << "Enter the position of your song: ";
	std::cin >> mySongPosition;
	
	std::cout << "Please, enter your song in playlist! \n";
	for (int i = 0; i < numberOfSongs; i++)
	{
		std::cout << "Your " << i + 1 << "-th song is: ";
		std::cin >> playlist[i];
	}
	int uncleJohnySong = playlist[mySongPosition-1];
	//sorting
	int temp;
	for (int i = 0; i < numberOfSongs; i++)
	{
		for (int j = 0; j < numberOfSongs; j++)
		{
			
			if (playlist[i] < playlist[j])
			{
				temp = playlist[i];
				playlist[i] = playlist[j];
				playlist[j] = temp;
			}
		}
	}
	std::cout << "Sorted playlist: \n";
	for (int i = 0; i < numberOfSongs; i++)
	{
		std::cout << playlist[i] << ' ';
	}
	for (int i = 0; i < numberOfSongs; i++)
	{
		if (playlist[i] == uncleJohnySong)
		{
			std::cout << "\nUncle Johny song in your new playlist is in " << i + 1 << "-th position\n";
		}
	}
	return 0;
}