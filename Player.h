#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

// dependancies

#include "Basic.h"

using namespace std;


/***************************************

Set Player Character Name function

***************************************/




/***************************************

		0.0.1   Player Class

		   ver 0.21.20
		
****************************************/

/////// Player functions.h //////////

#ifndef PLAYER_H
#define PLAYER_H 

class Player :public Basic {

	//find out how to sub players name 
	/*
	private:

	*/



public:

	Player();

	//add to other base classes after Basic

	Player(string id, int hp);

	~Player();

	//made virtual void to int

	virtual int attack();

	virtual int heavyAttack();

	virtual void support();

	int attackArray[2] = { attack(),heavyAttack() };

private:

	string name;
	int health;

	//so far type unused
	string type;

};

#endif //PLAYER_H


