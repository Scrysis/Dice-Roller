#pragma once
/*
-- Written by Christina Sullivan
Header File for the Dice class meant to emulate a 
rollable dice object.
*/

#ifndef dice_h
#define dice_h

#include <string>

using namespace std;

class dice
{
public:
	dice();
	dice(int);
	~dice();
	int roll();
};


#endif

