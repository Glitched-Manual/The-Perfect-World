#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>



using std::string;

/***************************************

0.0.18  Animal based classes ver 0.21.20


****************************************/

#ifndef ANIMAL_H
#define ANIMAL_H 

// remove Basic + basic dependent methods inheritance in future update

class Animal {


public:

	Animal();



	~Animal();

	virtual int attack();

	virtual int heavyAttack();


private:


	int health;
	string name;
	string type;


};

#endif