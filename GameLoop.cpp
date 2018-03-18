#pragma once

#include "GameLoop.h"


// gameLoop.cpp ver 0.21.20

GameLoop::GameLoop() {




}

GameLoop :: ~GameLoop() {




}

void GameLoop::setBattleTurnPhase(int battleTurn) {

	battleTurnPhase = battleTurn;


}

int GameLoop::getBattleTurnPhase() {

	return battleTurnPhase;


}


void GameLoop::endTurnPhase() {

	setBattleTurnPhase(getBattleTurnPhase() + 1);
}

void GameLoop:: allyTurn(Basic &hero, Basic ally, Basic &villain){


	// Hero attacks villain

	hero.attackTarget(villain);

	// ally acts
	/* if(hero.getHealth < 100 ){
	//limit amount of times recover can be used
	//support recover health
	}*/


	ally.attackTarget(villain);


}

void GameLoop::battle(Player &hero, Basic &villain) {

	hero.statCheck();

	cout << "\n\nVS\n\n";

	villain.statCheck();

	cout << "\nFight!!\n\n";
	// fight until one fighter goes down

	while (hero.getHealth()>0 && villain.getHealth()>0) {

		// makes sure the Hero and villain are able to fight

		if (hero.getHealth()>0 && villain.getHealth()>0) {

			//show health

			cout << "\n" << hero.getName() << " has " << hero.getHealth() << " hp\n\n";

			cout << villain.getName() << " has " << villain.getHealth() << " hp\n\n";

			//villain attacks Hero

			villain.attackTarget(hero);


		}

		// changes result of rand()



		// if the opponent is still standing fight!

		if (hero.getHealth()>0 && villain.getHealth()>0) {


			//show health    

			cout << "\n" << hero.getName() << " has " << hero.getHealth() << " hp\n\n";

			cout << villain.getName() << " has " << villain.getHealth() << " hp\n\n";

			// Hero attacks villain

			hero.attackTarget(villain);

		}
		if (hero.getHealth() <= 0) {
			// call Player loss function

			// playerLoss();
		}
		else if (villain.getHealth() <= 0) {
			//call Player Victory function

			playerVictory();

		}

	}
}
/**************************************

battle for when villain is a pointer object

*************************************/
void GameLoop::battle(Player &hero, Basic* villain) {

	hero.statCheck();

	cout << "\n\nVS\n\n";

	villain->statCheck();

	cout << "\nFight!!\n\n";

	// fight until one fighter goes down

	while (hero.getHealth()>0 && villain->getHealth()>0) {

		// makes sure the Hero and villain are able to fight

		if (hero.getHealth()>0 && villain->getHealth()>0) {

			//show health

			cout << "\n" << hero.getName() << " has " << hero.getHealth() << " hp\n\n";

			cout << villain->getName() << " has " << villain->getHealth() << " hp\n\n";

			//villain attacks Hero

			villain->attackTarget(hero);


		}

		// changes result of rand()



		// if the opponent is still standing fight!

		if (hero.getHealth()>0 && villain->getHealth()>0) {


			//show health    

			cout << "\n" << hero.getName() << " has " << hero.getHealth() << " hp\n\n";

			cout << villain->getName() << " has " << villain->getHealth() << " hp\n\n";

			// Hero attacks villain

			//may cause an error

			hero.attackTarget(villain);

		}

		if (hero.getHealth() <= 0) {
			// call Player loss function

			//playerLoss();
		}
		else if (villain->getHealth() <= 0) {
			//call Player Victory function

			playerVictory();

		}
	}

}

/*
// battle with ally - ally acts after hero via if health > 0

void GameLoop:: battle(Basic &hero,Ally &ally,Basic &villain){
//hero and ally

//vs


//villain



}

void GameLoop:: battle(Basic &hero,Ally &ally,Super_Enemy &boss){
//hero and ally

//vs


//boss



}
*/

/*********************
Victory Function

*******************/
void GameLoop::playerVictory() {

	int victoryMessage = 0;

	victoryMessage = rand() % 5;

	switch (victoryMessage) {

	case 0:

		cout << "\n\nYeah! You did it!!\n";

		break;

	case 1:

		cout << "\n\nVictory!!";

		break;

	case 2:

		cout << "\n\nAwesome!!";

		break;

	case 3:

		cout << "\n\nEpic Win!!";

		break;

	case 4:

		cout << "\n\nNicely Done!!";

		break;

	default:

		cout << "\n\nYou Win!!";

		break;

	}
}

/*******************

Loss Function

*******************/

void GameLoop::playerLoss() {

	int lossMessage = 0;

	lossMessage = rand() % 5;


	switch (0) {


	case 0:

		cout << "\n\n\t\tGame Over\n";

		break;

	case 1:

		cout << "\n\n\"A champion needs a motivation above and beyond winning.\" - Pat Riley\n";

		break;

	case 2:

		cout << "\n\n\"Winning isn't everything,but wanting to win is.\" - Vince Lombardi Jr.";

		break;

	case 3:

		cout << "\n\n\"Your positive action combined with positive thinking results in success.\" - Shiv Khera";

		break;

	case 4:

		cout << "\n\n\"The real glory is being knocked to your knees and then coming back.\n\tThat's real glory. Thats the essence of it.\" - Vince Lombardi Jr";

		break;

	default:

		cout << "\n\n\t\tTry Again\n";

		break;




	}


}

