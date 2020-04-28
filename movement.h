#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class movement		//class responsible for the characters movement
{

public:
	movement()
	{
		cout << "\nMove your character using the keyboard.\nw for (up), a for (left), d for (right), and s for (down).\n";
		cout << "If you wish to quit press q\n\n";
	}

	char wasd()
	{
		char mv;
		char up = 'w';
		char left = 'a';
		char right = 'd';
		char down = 's';
		char quit = 'q';


		mv = _getch();		//takes all keypresses and assigns them to mv

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
		else if (mv == quit)
		{
			cout << " You have quit the game.\n";
			exit(0);		//exits game
		}
		else
		{
			cout << "That key didn't work.\n";
			movement mvmt;		//returns to movement class
			mvmt.wasd();

		}
		return 0;
	}
	~movement() {}
};