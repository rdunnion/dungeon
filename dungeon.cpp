#include "movement.h"
#include "random_enc.h"
using namespace std;

int main()
{
	
	int health = 10;		//initializing variables
	int treasure = 0;

	string name;		//declare variable

	cout << "Welcome to the dungeon, enter your name:\n";
	cin >> name;		//takes name input
	cout << "\nGood luck in the dungeon " << name << ".\n";
	
	while (health != 0)		//while loop to access class members until the health is 0
	{
		movement mvmt;		//create mvmt object
		random_enc random;	//create random object
		mvmt.wasd();		//call wasd in movement class
		random.encounter(health, treasure);		//call encounter in random_enc class, passes 2 arguments
	}
	cout << "\n" << name << ", you have died. Goodbye.\n\n";
	cout << "You collected " << treasure << " pieces of treasure.\n\n";
	return 0;
	
}
