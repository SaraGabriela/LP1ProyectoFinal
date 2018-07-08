#ifndef GAME_H
#define GAME_H

#include "character.h"
#include <string>
#include <iostream>

using namespace std;

class game
{
	string name;
public:

	game(string _name = "none");
	~game();
	void playGame(character * c1, character * c2);
	void showScore(character * c1);
};

#endif