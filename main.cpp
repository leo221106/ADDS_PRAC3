#include "main.h"

using namespace std;
// create the human, referee and computer
int main(int argc, char **argv)
{
	array<Player *, 8> PLAYERS;
	Player *P1 = new Avalanche();
	PLAYERS[0] = P1;
	Player *P2 = new Bureaucrat();
	PLAYERS[1] = P2;
	Player *P3 = new Bureaucrat();
	PLAYERS[2] = P3;
	Player *P4 = new Toolbox();
	PLAYERS[3] = P4;
	Player *P5 = new Toolbox();
	PLAYERS[4] = P5;
	Player *P6 = new Crescendo();
	PLAYERS[5] = P6;
	Player *P7 = new Crescendo();
	PLAYERS[6] = P7;
	Player *P8 = new FistfullODollars();
	PLAYERS[7] = P8;

	Tournament T;
	cout << typeid(*T.run(PLAYERS)).name();
	cout << endl;

	return 0;
}
