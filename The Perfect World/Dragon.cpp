#pragma once

#include "Dragon.h"


//Dragon.cpp ver 0.21.20 //


Dragon::Dragon() {


}

Dragon::Dragon(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);

}

Dragon::~Dragon() {


}

int Dragon::attack() {

	return ((rand() % 33) + 30);

}


int Dragon::heavyAttack() {

	return ((rand() % 24) + 43);

}

//end of Dragon.cpp