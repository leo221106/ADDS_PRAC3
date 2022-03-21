//RandomComputer returns a random move.
#include "RandomComputer.h"
#include <cstdlib>
#include <time.h>
RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove(){
	srand(time(0));
	int randsel=rand()%3;
	if(randsel==0){
		changeMove('P');
	}
	else if(randsel==1){
		changeMove('R');
	}
	else{
		changeMove('S');
	}
	return getMove();
}