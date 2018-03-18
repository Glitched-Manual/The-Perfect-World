#pragma once

#include "Orc.h"

// Orc.cpp ver 0.21.20

Orc::Orc() {


}

Orc::Orc(string id, int hp) {

	this->setName(id);

	this->setHealth(hp);

}

Orc::~Orc() {


}



int Orc::attack() {

	return((rand() % 36) + 20);

}

int Orc::heavyAttack() {

	return ((rand() % 33) + 43);

}


//end of orc.cpp