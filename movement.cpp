
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <random>
using namespace std;

/*class monster
{
public:
	int fight()
	{

	}
};

class chest
{
	int loot()
	{

	}
};*/

class movement
{
public:
	char wasd()
	{
		char mv;
		char up = 'w';
		char left = 'a';
		char right = 'd';
		char down = 's';

		cout << "\nMove using w for (up), a for (left), d for (right), and s for (down).\n\n";
		mv = _getch();

		if (mv == up)
		{
			cout << "You have moved up 1 space.\n";
		}
		else if (mv == left)
		{
			cout << "You have moved left 1 space.\n";
		}
		else if (mv == right)
		{
			cout << "You have moved right 1 space.\n";
		}
		else if (mv == down)
		{
			cout << "You have moved down 1 space.\n";
		}
		else
		{
			cout << "it didn't work.";

		}
		return 0;
	}
};

class random_enc
{
public:
	int treasure = 0;
	int health;
public:
	int encounter()
	{
		int randnumber = rand() % 5 + 1;
		/*int randnumber = 0;
		random_device device;
		mt19937 generator(device());
		uniform_int_distribution<int> distribution(1, 5);
		for (size_t i = 0; i < 1; ++i)
		{
			cout << randnumber;
		}*/

		if (randnumber == 1)
		{
			cout << "You have been attacked by a kobold!!! You lose 1 hitpoint.\nYou manage to escape." << endl;
			--health;
			cout << "Hitpoints remaining: " << health << endl;
			return health;
		}
		else if (randnumber == 2)
		{
			cout << "You found treasure!" << endl;
			++treasure;
			cout << "Treasure collected: " << treasure << endl;
			return treasure;
		}
		else if (randnumber == 3)
		{
			return health;
		}
		else if (randnumber == 4)
		{
			cout << "You step on a trap and take damage!! You lose 1 hit point.\n" << endl;
			--health;
			cout << "Hitpoints remaining: " << health << endl;
			return health;
		}
		else
		{
			cout << "You see a party of kobolds ahead and turn around.\n";
			return health;
		}
	}
};



int main()
{
	string name;

	cout << "Welcome to the dungeon, enter your name:\n";
	cin >> name;
	cout << "\nGood luck in the dungeon " << name << "\n";
	int health = 0;
	int treasure = 0;
	
	while (health != 0)
	{
		movement mvmt;
		random_enc random;
		mvmt.wasd();
		random.health = random.encounter();
		//int health = random.encounter();
	}
	cout << "You have been killed. Goodbye.\n";
	return 0;
	
}
