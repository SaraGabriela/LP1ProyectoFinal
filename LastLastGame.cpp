// LastLastGame.cpp: define el punto de entrada de la aplicación de consola.
//

#include "allcheat.h"
#include "allcooperate.h"

int main()
{
	allcheat cheat(5, "allcheat", false);
	cout << cheat.get_name();

    return 0;
}

