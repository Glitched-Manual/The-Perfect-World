#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


#include "Basic.h"
#include "Enemy.h"

/***************************************

0.0.14  Ogre Class ver 0.21.20


****************************************/


#ifndef OGRE_H
#define OGRE_H



class Ogre : public Basic, public Enemy {
public:

	Ogre();

	Ogre(string id = "The Ogre", int hp = 200);

	~Ogre();

	int attack();

	virtual int heavyAttack();

private:


	int health;

	string name;

	string type;

};

#endif // ORC_H 