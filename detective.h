#pragma once
#include "character.h"
class detective : public character
	
{
private:
	bool cheat = false;

public:
	detective(int _score, string _name, bool _choice);
	~detective();
	void choice1(bool choice_other, int k);
};

