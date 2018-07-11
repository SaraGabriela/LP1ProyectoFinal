#include "grudger.h"

grudger::grudger(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{



}
grudger::~grudger()
{



}
void grudger::choice1(bool choice_other, int k)
{
	if (k == 1)
	{

		set_choice(true);

	}
	if (choice_other == false || cheat == true)
	{

		cheat = true;

		set_choice(false);

	}
	else
	{
		set_choice(true);
	}


}

