#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Basic.h"
#include "Enemy.h"


/***************************************

0.0.16  Thug Class ver 0.21.20


****************************************/
#ifndef THUG_H
#define THUG_H 

class Thug : public Basic, public Enemy {

public:

	Thug();

	Thug(string id = "The Thug", int hp = 110);

	~Thug();

	virtual int attack();

	virtual int heavyAttack();

private:


	int health;

	string name;

	string type;


};

#endif // end of thug.h