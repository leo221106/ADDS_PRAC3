#include "Human.h"
#include <iostream>

using namespace std;

Human::Human(){

}
// gets its move from the keyboard 
char Human::makeMove(){
	cout<< "Enter move: ";
	cin>> Move;

	return Move;
}