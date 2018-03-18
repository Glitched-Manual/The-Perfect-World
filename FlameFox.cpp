#pragma once

#include "FlameFox.h"


// FlameFox.cpp ver 0.21.20

FlameFox::FlameFox() {




}

FlameFox::FlameFox(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);


}

FlameFox ::  ~FlameFox() {




}

int FlameFox::attack() {

	return ((rand() % 15) + 18);


}

int FlameFox::heavyAttack() {


	return ((rand() % 24) + 21);

}

//end of FlameFox class