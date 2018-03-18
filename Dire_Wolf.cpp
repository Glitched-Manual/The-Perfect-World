#pragma once

#include "Dire_Wolf.h"


// Dire_Wolf.cpp ver 0.21.20

Dire_Wolf::Dire_Wolf() {


};

Dire_Wolf::Dire_Wolf(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);
};

Dire_Wolf:: ~Dire_Wolf() {


}

int Dire_Wolf::attack() {

	return ((rand() % 16) + 34);

}

int Dire_Wolf::heavyAttack() {

	return ((rand() % 15) + 61);

}
