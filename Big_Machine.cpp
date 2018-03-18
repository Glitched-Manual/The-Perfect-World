#pragma once

#include "Big_Machine.h"


// Big_Machine.cpp ver 0.21.20


Big_Machine::Big_Machine() {


}



Big_Machine:: ~Big_Machine() {


}

int Big_Machine::attack() {

	return ((rand() % 121) + 10);


}

int Big_Machine::heavyAttack() {

	return ((rand() % 65) + 34);

}


//end of Big_Machine.cpp
