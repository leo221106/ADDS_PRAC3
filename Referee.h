#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Referee{
private:
	char Outcome;
	char p1m;
	char p2m;

protected:
//
public:
	Referee();
	void newRefGame(Player, Player);
};

#endif