#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Basic.h"
#include "Enemy.h"


/***************************************

0.0.13  Dire_Wolf Class ver 0.21.20


****************************************/

#ifndef DIRE_WOLF_H
#define DIRE_WOLF_H

class Dire_Wolf : public Basic, public Enemy {
public:

	Dire_Wolf();

	Dire_Wolf(string id = "The Wolf", int hp = 160);

	~Dire_Wolf();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;
	string name;
	string type;

};

#endif // end of DIRE_WOLF_H