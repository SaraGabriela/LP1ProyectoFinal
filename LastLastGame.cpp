// LastLastGame.cpp: define el punto de entrada de la aplicación de consola.
//

#include "allcheat.h"
#include "allcooperate.h"
#include "copycat.h"
#include "game.h"
#include "copycat.h"
#include "grudger.h"
#include "detective.h"

int main()
{
	game testG("Nuevo juego");
	allcheat cheat(5, "allcheat", false);
	allcooperate coop(2, "allcooperate", true);
	allcooperate human(0, "human", true);
	copycat copy(3, "Copycat", true);
	grudger grud(2, "Grudger", true);
	detective dec(1, "Sherlock", true);

/*
	cout << cheat.get_name()<<endl<<endl;
	
	testG.playGame(&cheat, &coop);
	testG.showScore(&cheat);
	testG.showScore(&coop);
	*/

	bool humanChoice, lastChoice = true; // Choice de humano temporal

	cout << "Vas a jugar contra: "<< dec.get_name() << endl << endl;
	for (int i = 1; i < 11; i++)
	{
		dec.choice1(lastChoice, i);
		cout << "RONDA NRO" << i << endl;
		cout << "Elige cheat or cooperate" << endl;
		cin >> humanChoice;
		human.set_choice(humanChoice);

		testG.playGame(&dec, &human);
		testG.showScore(&dec);
		testG.showScore(&human);

		lastChoice = humanChoice;
		cout << endl << endl;
	}

    return 0;
}

