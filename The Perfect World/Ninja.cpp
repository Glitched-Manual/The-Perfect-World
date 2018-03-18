#pragma once

#include "Ninja.h"

// Ninja.cpp ver 0.21.20


Ninja::Ninja() {


}

Ninja::Ninja(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);

}

Ninja::~Ninja() {


}

int Ninja::attack() {

	return ((rand() % 9) + 20);

}


int Ninja::heavyAttack() {

	return ((rand() % 22) + 34);

}

//end of Ninja.cpp