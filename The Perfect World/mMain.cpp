#pragma once

#include "mMain.h"
/*

The perfect world


*/

//ver 0.21.20 main.cpp

namespace perfect {
	Ninja nin("Ninja");
	Ogre shrek("Shrek");
	Thug thug("Thug");
	Robot rob("ROB");
	Mobster jones("Mobster Jones");
	Orc orc("ORC");
	FlameFox fox("Infernal Fox");

	//enemy objects inside enemy1[] for random battle

	int enemyCount = 5;

	Basic* enemy1[] = { &nin,&thug,&rob,&orc,&fox };

}



void setPlayerName(string &characterName) {

	getline(cin, characterName);

	//list of names if the user does not enter one

	string nameList[] = { "Monkey D. Luffy","Light Yagami","Kenshin Himura","Guts","L","Shotaro Kaneda","Kenshiro","Levi","Jotaro Kujo","Saitama","Sora","Quote","Naruto Uzumaki","Goku","Rei Ayanami","Sailor Moon","Pikachu","Ryu","Ken","Spike Spiegel","PewDiePie","Astro","Superman","Batman","Saskue" };

	//if characterName is null   

	if (characterName == "") {

		//count nameList

		int listCount = 0;

		for (basic_string<char> a : nameList) {



			listCount += 1;

			//fixes only pikachu bug

			srand(time(NULL));

		}

		int i = (rand() % listCount);


		characterName = nameList[i];

		cout << "\n\nManual - You did not enter a name! :(\n\tNo worries,I can handle that! ;>\n\n";

	}

	else {

		cout << "You entered: " << characterName << " \n\n";

	}


}


int main() {

	cout << "Enter the name of your character\n\n";



	string playerName;


	setPlayerName(playerName);


	Player P1(playerName, 200);


	srand(time(0));

	GameLoop game;

	game.battle(P1, perfect::enemy1[(rand() % perfect::enemyCount)]);

	cout << "\n\nManual - Thank you for Playing!";
	cin.get();
	return 0;

}