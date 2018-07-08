#pragma once
#ifndef ALLCHEAT_H
#define ALLCHEAT_H

#include "character.h"

class allcheat : public character
{
public:
	allcheat(int _score, string _name, bool _choice);
	~allcheat();
	bool choice1(bool choice_other, int k);
	friend ostream & operator <<(ostream & os, const allcheat & a);
};

#endif