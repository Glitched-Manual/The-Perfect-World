#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#include "Super_Enemy.h"
#include "Basic.h"


/***************************************

		Dragon Class ver 0.21.20


****************************************/

#ifndef DRAGON_H
#define DRAGON_H 


class Dragon : public Basic, public Super_Enemy {

public:

	Dragon();

	Dragon(string id = "Dragon", int hp = 500);

	~Dragon();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;
	string name;
	string type;



};

#endif  //DRAGON_H
