#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


#include "Player.h"


/********************************************

GameLoop class

***************************************************/

#ifndef GAMELOOP
#define GAMELOOP

class GameLoop {


public:

	GameLoop();

	~GameLoop();

	int battleTurnPhase = 0;

	void setBattleTurnPhase(int battleTurn);

	int getBattleTurnPhase();

	void endTurnPhase();

	void playerVictory();

	void playerLoss();



	//  virtual void heroTurn(Basic &hero,Basic &villain);

	virtual void allyTurn(Basic &hero, Basic ally, Basic &villain);

	//  virtual void villainTurn(Basic &hero,Basic &villain);

	void battle(Player &hero, Basic &villain);

	//pointer villain obj

	void battle(Player &hero, Basic* villain);


	// void battle(Basic &hero,Ally &ally,Basic &villain);


	// void battle(Basic &hero,Ally &ally,Basic* villain);

	// void battle(Basic &hero,Ally &ally,Super_Enemy &boss);

private:

};

#endif