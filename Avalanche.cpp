//Avalanche always chooses Rock.

#include "Avalanche.h"

Avalanche::Avalanche()
{
	clearMoveCount();
	clearWinCount();
}

Avalanche::~Avalanche()
{
}

char Avalanche::makeMove(){
	changeMove('R');
	return getMove();
}
