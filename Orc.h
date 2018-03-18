#pragma once



#include "Basic.h"
#include "Enemy.h"


/***************************************

0.0.15   Orc Class ver 0.21.20


****************************************/

#ifndef ORC_H
#define ORC_H


class Orc : public Basic, public Enemy {

public:

	Orc();

	Orc(string id ="The Orc", int hp = 130);

	~Orc();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;

	string name;

	string type;

};

#endif // Orc.h