#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Dependancies

#include "Basic.h"
#include "Enemy.h"

using namespace std;



/***************************************

	Robot ver 0.21.20


****************************************/

//Robot.h

#ifndef ROBOT_H
#define ROBOT_H


class Robot : public Basic, public Enemy {

public:


	Robot();

	Robot(string id = "The Robot", int hp = 150);

	~Robot();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;

	string name;
	string type;

};

#endif //ROBOT_H

