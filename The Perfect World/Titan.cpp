#pragma once

#include "Titan.h"


// Titan.cpp ver 0.21.20 


Titan::Titan() {




}

Titan::Titan(string id, int hp) {


	this->setName(id);
	this->setHealth(hp);

}

Titan::~Titan() {




}

int Titan::attack() {

	return ((rand() % 26) + 30);

}

int Titan::heavyAttack() {

	return ((rand() % 32) + 55);

}


// end of Titan class
