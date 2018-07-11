#ifndef grudger_h
#define grudger_h
#include "character.h"

class grudger : public character
{
private:

	bool cheat=false;


public:
	grudger(int _score, string _name, bool _choice);
	~grudger();
	void choice1(bool choice_other, int k);

};

#endif
