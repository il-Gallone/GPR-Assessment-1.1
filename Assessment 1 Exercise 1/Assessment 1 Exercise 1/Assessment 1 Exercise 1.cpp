
#include "stdafx.h"
#include "player.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string newName = "Stormageddon the Dark Lord of All"; //String variable for the instance of the player class
	Player newPlayer(newName); //Creating an instance of the player class
	Test playerTest; //Creating an instance of the ineffecient test class
	cout << "Starting Health: " << playerTest.FindPlayerHealth(newPlayer) << endl; //Printing the original health of the player class to the console,
																				   //using the test class
	playerTest.AttackPlayer(newPlayer); //Damages the player using the test class
	cout << "Health after damaged once: " << playerTest.FindPlayerHealth(newPlayer) << endl; //Printing the new damaged health of the player class using the
																							 //test class
	cin >> newName;
    return 0;
}

