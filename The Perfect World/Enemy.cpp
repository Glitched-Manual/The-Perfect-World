#pragma once

#include "Enemy.h"



// Enemy.cpp ver 0.21.20 //

Enemy::Enemy() {


}

Enemy::~Enemy() {


}

int Enemy::attack() {

	return ((rand() % 50) + 10);

}


int Enemy::heavyAttack() {

	return ((rand() % 65) + 34);

}

// end of enemy.cpp

