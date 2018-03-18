#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Basic.h"
#include "Enemy.h"


/***************************************

		Ninja Class ver 0.21.20


****************************************/


#ifndef NINJA_H
#define NINJA_H


class Ninja : public Basic, public Enemy {
public:

	Ninja();

	Ninja(string id = "The Ninja", int hp = 120);

	~Ninja();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;
	string name;
	string type;



};

#endif //NINJA_H
