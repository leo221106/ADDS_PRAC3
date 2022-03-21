#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
class Computer: public Player{

private:
	char Move;
	int winCount;
	int moveCount;

protected:

public:
	Computer();
	char makeMove();
};


#endif