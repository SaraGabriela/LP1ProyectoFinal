// LastLastGame.cpp: define el punto de entrada de la aplicación de consola.
//

#include "allcheat.h"
#include "allcooperate.h"
#include "copycat.h"
#include "copycat.h"
#include "grudger.h"
#include "detective.h"

#include "game.h"
#include "character.h"

int main()
{
	game testG("Nuevo juego"); //Se crea un juego nuevo

	allcooperate human(0, "human", true); // Se crea un character para el jugador

	character ** players = new character * [5];

	players[0] =  new copycat(0, "Copycat", true);
	players[1] =  new allcheat(0, "Allcheat", false);
	players[2] = new allcooperate (0, "Allcooperate", true);
	players[3] = new grudger (0, "Grudger", true);
	players[4] = new detective (0, "Sherlock", true);

	int scoreTotal = 0; //score a lo largo del juego

	cout << "-----EMPIEZA EL JUEGO-----" << endl<<endl;

	for (int j = 0; j < 5; j++)
	{
		bool humanChoice, lastChoice = true; // Choice de humano temporal

		cout << "==========================" << endl;
		cout << "Tu puntaje es: " << scoreTotal << endl<<endl;
		cout << "Vas a jugar contra: " << players[j]->get_name() << endl;
		cout << "==========================" << endl<<endl;

		for (int i = 0; i < 7; i++) // Numero de jugadas por character
		{
			players[j]->choice1(lastChoice, i + 1);
			cout << "RONDA NRO" << i + 1 << endl;
			cout << "Elige 0 para cheat o 1 para cooperate:";
			cin >> humanChoice;
			human.set_choice(humanChoice);
			cout << players[j]->get_name() << " elige " << players[j]->get_choice() << endl;

			testG.playGame(players[j], &human);
			testG.showScore(players[j]);
			testG.showScore(&human);

			lastChoice = humanChoice;
			cout << endl << endl;
		}

		scoreTotal += human.get_score();
		human.set_score(0);

		cout << "--Fin de juego contra " << players[j]->get_name() <<"--"<< endl << endl<<endl;
	}

	cout << endl << "===========================" << endl;
	cout << "TU PUNTAJE FINAL ES: " << scoreTotal << endl;
	cout << endl << "===========================" << endl;

    return 0;
}

