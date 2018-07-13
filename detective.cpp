#include "detective.h"



detective::detective(int _score, string _name, bool _choice) :character(_score, _name, _choice)
{

}


detective::~detective()
{
}

void detective::choice1(bool choice_other, int k)
{


	if (k < 5)
	{
		if (choice_other == false)
		{
			cheat = true;
		}
		cout << "cheat ahora es " << cheat << endl;
	}

	if(k==1 || k == 3 || k == 4)
	{
		set_choice(false);
	}
	else if (k == 2)
	{
		set_choice(true);
	}
	else {
		if (cheat == true) 
		{
			set_choice(choice_other);
			//cout << "copycat" << endl;
		}
		else
		{
			set_choice(false);
			//cout << "allcheat" << endl;
		}
	}
}
