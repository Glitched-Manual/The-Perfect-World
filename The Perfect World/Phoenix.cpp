#pragma once

#include "Phoenix.h"



// Phoenix.cpp ver 0.21.20

Phoenix::Phoenix() {




}

Phoenix::Phoenix(string id, int hp) {

	this->setName(id);

	this->setHealth(hp);


}

Phoenix ::~Phoenix() {




}

int Phoenix::attack() {

	return ((rand() % 26) + 70);

}


int Phoenix::heavyAttack() {

	return ((rand() % 54) + 114);

}


//end of Phoenix.cpp