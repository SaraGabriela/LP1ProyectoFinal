#include "copycat.h"

copycat::copycat(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{

}
copycat::~copycat()
{

}
bool copycat::choice1(bool choice_other, int k)
{
	if (k == 1)
		return true;

	return choice_other;

}

ostream & operator <<(ostream & os, const copycat & a)
{
	os << "copycat class: " << a.score << " - " << a.name << " - " << a.choice;
	return os;
}

