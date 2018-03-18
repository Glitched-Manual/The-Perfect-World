#pragma once

#include "Basic.h"


// Basic.cpp ver 0.21.20

// .cpp constructor definition

Basic::Basic() {



}

// overloaded constructor

Basic::Basic(string id, int hp) {

	setName(id);

	setHealth(hp);

}


// .cpp destructor definition

Basic::~Basic() {


}

void Basic::setHealth(int hp) {


	health = hp;

}

int Basic::getHealth() {


	return health;
}


void Basic::setName(string id) {

	name = id;

}

string Basic::getName() {


	return name;
}


void Basic::statCheck() {

	cout << "\n\n";
	std::cout.fill('/');
	std::cout.width(35);

	cout << std::left << "/" << '\n' << endl;

	cout << "\n" << (*this).getName() << " Has " << this->getHealth() << " Health Points\n\n\n";

	std::cout.fill('/');
	std::cout.width(35);

	std::cout << std::left << "/" << '\n' << endl;
	cout << "\n";
}

int Basic::attack() {


	return 10;

}

int Basic::heavyAttack() {


	return 50;

}


void Basic::takeDamage(int damage) {


	this->setHealth(this->getHealth() - damage);
	cout << "\n" << (*this).getName() << " Recieves " << damage << " points of damage\n";

	if (this->getHealth() <= 0) {

		cout << "\n" << this->getName() << " defeated!\n";


	}
	else {



	}

}

//remove contents of main and make a function to do everything - done

// use Enemy or Player class

void Basic::attackTarget(Basic &target) {

	//hit or miss 
	(*this).hitOrMiss(target, 75);

	//if hit target.takeDamage() 

}

// when pointer object is used

void Basic::attackTarget(Basic* target) {

	//hit or miss 
	this->hitOrMiss(target, 75);

	//if hit target.takeDamage() 

}

void Basic::hitOrMiss(Basic &target, int accuracy) {

	//hit or miss 


	cout << "\n" << this->getName() << " Attacks!\n\n";




	if ((rand() % 101) <= accuracy) {

		cout << "Hit!!\n\n";

		//call damage function

		target.takeDamage((*this).attack());

	}
	else {

		cout << "But, it missed...\n\n";

	}

}

// hitOrMiss for pointer object

void Basic::hitOrMiss(Basic* target, int accuracy) {

	//hit or miss 


	cout << "\n" << this->getName() << " Attacks!\n\n";





	rand();

	if ((rand() % 101) <= accuracy) {

		cout << "Hit!!\n\n";

		//call damage function

		target->takeDamage(this->attack());

	}
	else {

		cout << "But, it missed...\n\n";

	}

}

//arg must be zero

void Basic::multiHit(int maxHits = 2, int accuracy = 50) {
	int arg = 0;


	//remove num use max hit value


	int track = 0;
	int hitAttemps = 1;

	//remove and pass method attack info


	int data[2];

	while (track < hitAttemps) {



		data[track] = rand();



		rand();

		if (((rand() % 100) + 1) <= accuracy) {

			cout << "Hit!!\n\n";

			cout << data[track] << " Damage dealt\n\n";


			arg = +data[track];
		}

		else {

			cout << "But, it missed...\n\n";

		}


		//use hit or miss to deal damage 


		track++;
	}

}



