#include "grudger.h"

grudger::grudger(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{



}
grudger::~grudger()
{



}
bool grudger::choice1(bool choice_other, int k)
{
	if (k == 1)
	{

		return true;

	}
	if (choice_other == false)
	{

		cheat = true;

		return false;

	}
	if (choice_other == true)
	{

		cheat = false;

		return true;

	}


}

