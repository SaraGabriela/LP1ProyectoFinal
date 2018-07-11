#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<iostream>

using namespace std;

class character
{
protected:
	int score;
	string name;
	bool choice;

public:
	character(int _score = 0, string _name = "none", bool choice = true);
	~character();

	void set_score(int _score);
	void set_name(string _name);
	void set_choice(bool _choice);

	int get_score();
	string get_name();
	bool get_choice();

	virtual void choice1(bool choice_other, int k) = 0; // k is the current time, first , second 

	friend ostream & operator <<(ostream & os, const character & a);

};
#endif