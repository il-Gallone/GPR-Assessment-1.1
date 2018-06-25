#pragma once
#include <string>

using namespace std;

//Player Class
class Player
{
private:
	string name; //Name of the player as a private string
	int health; //Health of the player as a private integer
	int damage; //Damage dealt to player as a private integer
public:
	//Allows access to the private name variable, read only
	string GetName() {
		return name;
	}
	//Allows access to the private health variable, read only
	int GetHealth() {
		return health;
	}
	//Changes the health of the player in terms of damage
	void DamagePlayer() {
		health -= damage;
	}
	//Allows access to the private damage variable, write only
	void ModifyDamage(int newDamage) {
		damage == newDamage;
	}
	Player(string setName) {
		//Constructor
		name = setName;
		health = 100;
		damage = 5;
	}
	~Player() {
		//Deconstructor
	}
};

//The really ineffecient and unpurposeful Test Class that only exists to fit the brief
class Test {
public:
	//Uses a Player Class pointer to call the GetHealth function of the targeted player
	int FindPlayerHealth(Player& player) {
		return player.GetHealth();
	}
	//Uses a Player Class pointer to call the DamagePlayer function of the targeted player
	void AttackPlayer(Player& player) {
		player.DamagePlayer();
	}
};