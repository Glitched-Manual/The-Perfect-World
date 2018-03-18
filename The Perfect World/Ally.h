#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#include "mMain.h"

using namespace std;


/***************************************

		0.0.2  Ally Class ver 0.21.20


****************************************/


////// Ally functions.h /////

#ifndef ALLY_H
#define ALLY_H

class Ally : public Basic {
public:

	Ally();

	Ally(string id, int hp);

	~Ally();

	virtual void allyAction(int action);


	virtual int attack();

	virtual int heavyAttack();

	virtual void support();


	int attackArray[2] = { attack(),heavyAttack() };



private:

	int health;

	string name;
	string type;

};

#endif //Ally.h
