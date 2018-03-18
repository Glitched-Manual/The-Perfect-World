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

0.0.18   Phoenix class ver 0.21.20


****************************************/

#ifndef PHOENIX_H
#define PHOENIX_H

class Phoenix :public Basic, public Super_Enemy {

public:

	Phoenix();

	Phoenix(string id = "The Phoenix", int hp = 800);

	~Phoenix();



	virtual int attack();

	virtual int heavyAttack();


private:


	int health;

	string name;

	string type;

};

#endif // PHOENIX_H    

