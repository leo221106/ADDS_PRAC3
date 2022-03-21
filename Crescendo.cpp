// Crescendo moves in the following order: Paper, Scissors, Rock.
#include "Crescendo.h"

Crescendo::Crescendo()
{
	clearMoveCount();
	clearWinCount();
}

Crescendo::~Crescendo()
{
}

char Crescendo::makeMove()
{
	int sel = getMoveCount() % 3;
	if (sel == 0)
	{
		changeMove('P');
	}
	else if (sel == 1)
	{
		changeMove('S');
	}
	else if (sel == 2)
	{
		changeMove('R');
	}
	return getMove();
}