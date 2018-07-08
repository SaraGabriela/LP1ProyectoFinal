#include "game.h"



game::game(string _name)
{
	name = _name;
}


game::~game()
{
}

void game::playGame(character * c1, character * c2)
{
	if (c1->get_choice() && c2->get_choice())
	{
		c1->set_score(c1->get_score() + 2);
		c2->set_score(c2->get_score() + 2);
		cout << "ambos ganan" << endl;
	}
	else if(c1->get_choice() && !c2->get_choice())
	{
		c1->set_score(c1->get_score() - 1);
		c2->set_score(c2->get_score() + 3);
		cout << "gana 2" << endl;
	}
	else if (!c1->get_choice() && c2->get_choice())
	{
		c1->set_score(c1->get_score() + 3);
		c2->set_score(c2->get_score() - 1);
		cout << "gana 1" << endl;
	}
	else
	{
		cout << "Nadie gana" << endl;
	}
}

void game::showScore(character * c1)
{
	cout << "El puntaje de " << c1->get_name() << " es " << c1->get_score() << endl;
}