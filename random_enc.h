#include <iostream>
#include <time.h>
using namespace std;

class random_enc			//class that creates the various encounters in the dungeon 
							//and applies them towards the character
{
	int treasure;		//initialize variables
	int health;
public:
	random_enc() {}		//constructor
	void encounter(int& health, int& treasure)
	{
		srand(static_cast<unsigned int>(time(NULL)));		//seeds rand with the time to make numbers random, and adjust for 64 bit os, 
															//srand take a 32 bit int
		int randnumber = rand() % 5 + 1;		//chooses a random number 1-5

		if (randnumber == 1)		//health takes damage
		{
			cout << "You have been attacked by a kobold!!! You lose 1 hitpoint. You manage to escape." << endl;
			--health;
			cout << "Hitpoints remaining: " << health << endl;		//prints the current hitpoints
		}
		else if (randnumber == 2)	//treasure is increased
		{
			cout << "You found treasure!" << endl;
			++treasure;
			cout << "Treasure collected: " << treasure << endl;
		}
		else if (randnumber == 3)	//move again
		{
			cout << "Move again.\n";
		}
		else if (randnumber == 4)	//health takes damage
		{
			cout << "You step on a trap and take damage!! You lose 1 hit point.\n" << endl;
			--health;
			cout << "Hitpoints remaining: " << health << "\n\n";
		}
		else						//else statement to address rand number 5
		{
			cout << "You see a party of kobolds ahead and turn around.\n";
		}
	}
	~random_enc() {}
};