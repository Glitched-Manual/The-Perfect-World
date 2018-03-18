#pragma once

#include "Thug.h"

// thug.cpp ver 0.21.20

Thug::Thug() {


}


Thug::Thug(string id, int hp) {

	this->setName(id);

	this->setHealth(hp);
}

Thug::~Thug() {


}

int Thug::attack() {

	return ((rand() % 36) + 33);

}

int Thug::heavyAttack() {

	return ((rand() % 28) + 75);

}
