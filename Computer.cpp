#include "Computer.h"

using namespace std;


Computer::Computer(){

}


//functions
char Computer::makeMove(){
	Move='R';
	doMove();
	return Move;
}
