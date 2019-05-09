/*
Attack class to hold the full set of variables used in attacks in D&D 
games.
*/
#include "attack.h"
#include <string>
#include <iostream>


int numDice;
dice die;
string firstDamageType;
string bonusDamageType;


attack::attack()
{
	numDice = 0;
	die = dice();
	firstDamageType = "none";
	bonusDamageType = "none";
}

attack::attack(int n, dice h, string first, int, string second)
{
	numDice = n;
	die = h;
	firstDamageType = first;
	bonusDamageType = second;
}




void attack::rollAttack()
{
	

}

attack::~attack()
{
}
