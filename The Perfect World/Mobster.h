#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Basic.h"
#include "Enemy.h"


/***************************************

0.0.17   Mobster Class ver 0.21.20


****************************************/

#ifndef MOBSTER_H
#define MOBSTER_H 

class Mobster : public Basic, public Enemy {

public:

	Mobster();

	Mobster(string id = "The Mobster", int hp = 90);

	~Mobster();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;
	string name;
	string type;


};

#endif