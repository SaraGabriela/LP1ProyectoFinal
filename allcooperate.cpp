
#include "allcooperate.h"

allcooperate::allcooperate(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{

}
allcooperate::~allcooperate()
{

}
void allcooperate::choice1(bool choice_other, int k)
{
	set_choice(true);
}

ostream & operator <<(ostream & os, const allcooperate & a)
{
	os << "All Cooperate: " << a.score << " - " << a.name << " - " << a.choice;
	return os;
}
