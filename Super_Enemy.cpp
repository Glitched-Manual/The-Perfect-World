#pragma once

#include "Super_Enemy.h"


// Super_Enemy.cpp ver 0.21.20 //

Super_Enemy::Super_Enemy() {



}



Super_Enemy::~Super_Enemy() {



}



int Super_Enemy::attack() {


	return ((rand() % 91) + 10);

}

int Super_Enemy::heavyAttack() {

	return ((rand() % 65) + 34);

}

void Super_Enemy::bossAppears() {

	cout << "\n\nGet Ready for war!!\n\n";


}

// end of Super_Enemy.cpp

