#pragma once

#include "Player.h"


// Player.cpp ver 0.21.20 //

Player::Player() {


}

Player::Player(string id, int hp) {

	setName(id);
	setHealth(hp);


}

Player::~Player() {



}

//define player methods   

//type class:: function(){}
//overrides virtual in base   
//changed void to int

int Player::attack() {



	rand();

	return ((rand() % 24) + 15);

}


int Player::heavyAttack() {

	return ((rand() % 37) + 29);

}

void Player::support() {

	cout << "Player supports! \n" << endl;

}
// end Player.cpp
