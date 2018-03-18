#pragma once


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;




/***************************************
      for Normal Enemies

	 Enemy Class ver 0.21.20


****************************************/


#ifndef ENEMY_H 
#define ENEMY_H

// remove Basic + basic dependent methods inheritance in future update - done

class Enemy {
public:

	Enemy();


	~Enemy();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;
	string name;
	string type;


};

#endif  //end of ENEMY_H