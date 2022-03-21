#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player
{
private:
	char Move;
	int winCount;
	int moveCount;

public:
	Player();
	~Player();
	virtual char makeMove();
	void win();
	void doMove();
	void clearWinCount();
	void clearMoveCount();
	void changeMove(char);
	char getMove();
	int getMoveCount();
	int getWinCount();
};

#endif