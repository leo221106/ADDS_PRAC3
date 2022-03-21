// cpp: Toolbox always chooses Scissors.
#include "Toolbox.h"

Toolbox::Toolbox(/* args */)
{
	clearMoveCount();
	clearWinCount();
}

Toolbox::~Toolbox()
{
}

char Toolbox::makeMove()
{
	changeMove('S');
	return getMove();
}