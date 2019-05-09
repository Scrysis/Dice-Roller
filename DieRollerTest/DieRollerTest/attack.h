#pragma once
#ifndef attack_h
#define attack_h

#include <string>
#include "dice.h"
#include <iostream>

using namespace std;

class attack
{
public:
	attack();
	attack(int, dice h, string first, int, string second);
	
	void rollAttack();
	~attack();
};

#endif