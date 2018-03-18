#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


/***************************************

   Big Machine Classes ver 0.21.20

- parent for all big machine classes

****************************************/

#ifndef BIG_MACHINE_H
#define BIG_MACHINE_H 


class Big_Machine {

public:

	Big_Machine();



	~Big_Machine();

	virtual int attack();

	virtual int heavyAttack();

private:

	int health;

	string name;
	string type;



};

#endif //BIG_MACHINE_H