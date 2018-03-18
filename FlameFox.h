#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>



#include "Animal.h"
#include "Basic.h"
#include "Enemy.h"


/***************************************

*  0.0.19   Flame Fox class ver 0.21.20   *


****************************************/

#ifndef FLAMEFOX_H
#define FLAMEFOX_H

class FlameFox : public Basic, public Animal, public Enemy {

public:

	FlameFox();

	FlameFox(string id = "Infernal Fox", int hp = 120);

	~FlameFox();


	virtual int attack();

	virtual int heavyAttack();

private:

	int health;

	string name;

	string type;

};

#endif // end of FLAMEFOX_H