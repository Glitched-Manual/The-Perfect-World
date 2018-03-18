#pragma once

#include "Robot.h"


//Robot.cpp ver 0.21.20

Robot::Robot() {




}

Robot::Robot(string id, int hp) {

	this->setName(id);
	this->setHealth(hp);

}

Robot::~Robot() {


}


int Robot::attack() {

	return ((rand() % 17) + 17);


}

int Robot::heavyAttack() {

	return ((rand() % 16) + 28);

}
// end of Robot .cpp