#pragma once

#include "Monster.h"


// Monster .cpp 0.21.20

Monster::Monster() {


}

Monster::Monster(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);
}

Monster::~Monster() {


}

int Monster::attack() {

	return ((rand() % 50) + 10);

}

int Monster::heavyAttack() {

	return ((rand() % 65) + 34);

}
