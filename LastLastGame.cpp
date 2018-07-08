// LastLastGame.cpp: define el punto de entrada de la aplicación de consola.
//

#include "allcheat.h"
#include "allcooperate.h"
#include "game.h"

int main()
{
	game testG("Nuevo juego");
	allcheat cheat(5, "allcheat", false);
	allcooperate coop(2, "allcooperate", true);
	cout << cheat.get_name()<<endl<<endl;
	
	testG.playGame(&cheat, &coop);
	testG.showScore(&cheat);
	testG.showScore(&coop);


    return 0;
}

