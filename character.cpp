
#include "character.h"

character::character(int _score, string _name, bool _choice)
{
	score = _score;
	name = _name;
	choice = _choice;
}

character::~character()
{

}

ostream & operator <<(ostream & os, const character & a)
{
	os << "character: " << a.score << " - " << a.name << " - " << a.choice;
	return os;
}

void character::set_score(int _score)
{
	score = _score;
}
void character::set_name(string _name)
{
	name = _name;
}
void character::set_choice(bool _choice)
{
	choice = _choice;
}

int character::get_score()
{
	return score;
}
string character::get_name()
{
	return name;
}

bool character::get_choice()
{
	return choice;
}
