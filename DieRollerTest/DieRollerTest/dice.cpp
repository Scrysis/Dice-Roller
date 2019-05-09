/*
Main body for the dice class, meant to emulate a "rollable"
dice object for use with both the primary program and the dndchar
class.
*/

#include "dice.h"
#include <string>
#include <iostream>
#include <random>

int num;



dice::dice()
{
	num = 0;
}

dice::dice(int n)
{
	num = n;
}


dice::~dice()
{
}

int dice::roll()
{

	return (rand()% num + 1);
}
