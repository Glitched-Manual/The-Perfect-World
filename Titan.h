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

	Titan Class ver 0.21.20


****************************************/

#ifndef TITAN_H
#define TITAN_H



class Titan : public Basic, public Super_Enemy {

public:

	Titan();

	Titan(string id = "Titan", int hp = 720);

	~Titan();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;
	string name;
	string type;

};

#endif //TITAN_H