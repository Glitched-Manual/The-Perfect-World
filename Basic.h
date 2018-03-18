#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;


/*********************************************************

Basic methods class 

ver 0.21.20

**********************************************************/
#ifndef BASIC_H
#define BASIC_H

class Basic {

public:

	Basic();
	Basic(string id, int hp);

	~Basic();



	void setHealth(int hp);

	int getHealth();

	void setName(string id);

	string getName();

	virtual int attack();

	virtual int heavyAttack();

	void takeDamage(int damage);

	// target address ,damage

	void attackTarget(Basic &target);

	//object pointer

	void attackTarget(Basic* target);


	virtual void hitOrMiss(Basic &target, int accuracy);

	//object pointer

	virtual void hitOrMiss(Basic* target, int accuracy);

	void multiHit(int maximumHits, int hitAccuracy);

	//statCheck

	void statCheck();






private:

	int health;
	string name;



};

#endif // BASIC_H 