#pragma once

#include "Animal.h"


// Animal.cpp ver 0.21.20

Animal::Animal() {


}



Animal::~Animal() {


}

int Animal::attack() {

	return ((rand() % 50) + 10);

}

int Animal::heavyAttack() {

	return ((rand() % 65) + 34);

}
