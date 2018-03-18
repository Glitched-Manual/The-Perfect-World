#pragma once

#include "Mutant.h"


// Mutant.cpp ver 0.21.20

Mutant::Mutant() {


}

Mutant::Mutant(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);
}

Mutant:: ~Mutant() {


}

int Mutant::attack() {

	return ((rand() % 50) + 10);

}

int Mutant::heavyAttack() {

	return ((rand() % 65) + 34);

}

// end Mutant.cpp