
#include "allcheat.h"

allcheat::allcheat(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{

}
allcheat::~allcheat()
{

}
bool allcheat::choice1(bool choice_other, int k)
{
	return false;
}

ostream & operator <<(ostream & os, const allcheat & a)
{
	os << "All cheat: " << a.score << " - " << a.name << " - " << a.choice;
	return os;
}
