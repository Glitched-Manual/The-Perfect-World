#pragma once


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#include "Basic.h"
#include "Enemy.h"


/***************************************

	Monster Class ver 0.21.20

****************************************/
#ifndef MONSTER_H
#define MONSTER_H

class Monster : public Basic, public Enemy {
public:

	Monster();

	Monster(string id = "The Monster", int hp = 230);

	~Monster();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;
	string name;
	string type;


};

#endif //MONSTER_H
