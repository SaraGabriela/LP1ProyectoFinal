#ifndef grudger_h
#define grudger_h
#include "character.h"

class grudger : public character
{
private:

	bool cheat;


public:
	grudger(int _score, string _name, bool _choice);
	~grudger();
	bool choice1(bool choice_other, int k);

};

#endif
