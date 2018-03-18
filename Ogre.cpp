#pragma once

#include "Ogre.h"



// Ogre.cpp ver 0.21.20

Ogre::Ogre() {


}


Ogre::Ogre(string id, int hp) {

	this->setName(id);

	this->setHealth(hp);

}


Ogre:: ~Ogre() {


}

int Ogre::attack() {

	return ((rand() % 22) + 25);

}

int Ogre::heavyAttack() {

	return ((rand() % 65) + 34);

}

//end of Orge.cpp