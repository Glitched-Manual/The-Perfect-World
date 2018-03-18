#pragma once


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>



#include "Basic.h"
#include "Big_Machine.h"


/***************************************

		Tank Class ver 0.21.20


****************************************/

// Tank.h

#ifndef TANK_H
#define TANK_H

class Tank : public Basic, public Big_Machine {
public:


	Tank();

	Tank(string id = "The tank", int hp = 300);

	~Tank();


	virtual int attack();

	virtual int heavyAttack();

private:


	int health;
	string name;
	string type;


};

#endif //TANK_H
