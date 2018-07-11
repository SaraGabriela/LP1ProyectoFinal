
#ifndef ALLCOOPERATE_H
#define ALLCOOPERATE_H

#include "character.h"

class allcooperate : public character
{
public:
	allcooperate(int _score, string _name, bool _choice);
	~allcooperate();
	void choice1(bool choice_other, int k);
	friend ostream & operator <<(ostream & os, const allcooperate & a);
};

#endif