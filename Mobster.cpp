#pragma once

#include "Mobster.h"


// Mobster.cpp ver 0.21.20

Mobster::Mobster() {


}

Mobster::Mobster(string id, int hp) {

	this->setName(id);

	this->setHealth(hp);
}

Mobster::~Mobster() {


}

int Mobster::attack() {

	return ((rand() % 50) + 10);
}

int Mobster::heavyAttack() {

	return ((rand() % 65) + 34);

}