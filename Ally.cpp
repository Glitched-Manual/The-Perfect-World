#pragma once

#include "Ally.h"

// Ally.cpp ver 0.21.20 //


Ally::Ally() {


}

Ally::Ally(string id, int hp) {

	setName(id);
	setHealth(hp);


}

Ally::~Ally() {


}

void Ally::allyAction(int action = 1) {

	if (action == 1) {

		cout << "\n" << this->getName() << " Attacks!\n";

	}

	else if (action == 2) {

		cout << "\n" << this->getName() << " Supports!\n";

	}

	else if (action == 3) {

		cout << "\n" << this->getName() << " Runs!\n";

	}

	else {


		cout << "\n" << this->getName() << " does nothing...\n";
	}
}


int Ally::attack() {

	return ((rand() % 21) + 10);

}

int Ally::heavyAttack() {

	return ((rand() % 36) + 34);

}


void Ally::support() {

	cout << "Ally supports!! \n" << endl;

}

// Ally.cpp end  