#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;




/***************************************

  Super Enemy Class ver 0.21.20

- parent for all large enemies

- may be deleted conflicts with basic

-solution use new unique methods for Super_Enemy child classes

- subclasses not not need getters and setters from this class

****************************************/




//// Super_Enemy.h

#ifndef SUPER_ENEMY
#define SUPER_ENEMY

// remove Basic inheritance in future update

class Super_Enemy {
public:

	Super_Enemy();

	// Super_Enemy(string id, int hp);

	~Super_Enemy();


	virtual int attack();

	virtual int heavyAttack();

	virtual void bossAppears();

private:

	int health;

	string name;
	string type;

};





#endif // SUPER_ENEMY 