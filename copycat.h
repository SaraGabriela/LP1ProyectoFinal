#ifndef COPYCAT_H
#define COPYCAT_H
#include "character.h"

class copycat : public character
{
public:
	copycat(int _score, string _name, bool _choice);
	~copycat();
	void choice1(bool choice_other, int k);
	friend ostream & operator <<(ostream & os, const copycat & a);
};

#endif