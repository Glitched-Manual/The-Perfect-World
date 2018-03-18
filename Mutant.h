#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Basic.h"
#include "Enemy.h"

/***************************************

0.0.12   Mutant Class ver 0.21.20


****************************************/

#ifndef MUTANT_H
#define MUTANT_H

class Mutant : public Basic, public Enemy {

public:

	Mutant();

	Mutant(string id = "The Mutant", int hp = 116);

	~Mutant();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;
	string name;
	string type;;


};

#endif // Mutant.h