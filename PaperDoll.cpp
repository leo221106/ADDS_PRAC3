//Paper doll moves in the following order: Paper, Scissors, Scissors.

#include "PaperDoll.h"

char PaperDoll::makeMove(){
	int sel = getMoveCount() % 3;
	if (sel==0)
	{
		changeMove('P');
	}
	else {
		changeMove('S');
	}
	return getMove();
}


PaperDoll::PaperDoll()
{
	clearMoveCount();
	clearWinCount();
}

PaperDoll::~PaperDoll()
{
}
