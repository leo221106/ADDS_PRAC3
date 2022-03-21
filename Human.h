#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"


class Human: public Player{
private:
	char Move;
	int winCount;
protected:
// public functions
public:
	Human();
	char makeMove();

};

#endif