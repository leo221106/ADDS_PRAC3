//Bureaucrat always chooses Paper.
#include "Bureaucrat.h"

char Bureaucrat:: makeMove(){
	changeMove('P');
	return getMove();
}

Bureaucrat::Bureaucrat()
{
	clearMoveCount();
	clearWinCount();
}

Bureaucrat::~Bureaucrat()
{
}
