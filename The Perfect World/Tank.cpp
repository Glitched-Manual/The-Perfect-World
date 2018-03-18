#pragma once

#include "Tank.h"


// Tank.cpp ver 0.21.20

Tank::Tank() {


}

Tank::Tank(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);

}

Tank::~Tank() {


}

int Tank::attack() {


	return ((rand() % 20) + 40);

}

int Tank::heavyAttack() {

	return ((rand() % 27) + 75);

}


//end of Tank.cpp

