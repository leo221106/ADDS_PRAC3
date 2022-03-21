// Fistfull0Dollars moves in the following order: Rock, Paper, Paper
#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(/* args */)
{
	clearMoveCount();
	clearWinCount();
}

FistfullODollars::~FistfullODollars()
{
}

char FistfullODollars::makeMove()
{
	int sel = getMoveCount() % 3;
	if (sel == 0)
	{
		doMove();
		changeMove('R');

		return getMove();
	}
	else if (sel == 1 | sel == 2)
	{
		doMove();
		changeMove('P');
		return getMove();
	}
}