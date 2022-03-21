#include "Tournament.h"
#include "Referee.h"
using namespace std;
Tournament::Tournament(){

}


Player* Tournament::Round(Player* p1, Player* p2){
	Referee r;
	p1->clearMoveCount();
	p2->clearMoveCount();
	p1->clearWinCount();
	p2->clearWinCount();

	for (int i = 0; i < 5; i++)
	{
		r.newRefGame(*p1, *p2);
	}

	p1->clearMoveCount();
	p2->clearMoveCount();

	if(p1->getWinCount()>=p2->getWinCount()){
		return p1;
	}
	else{
		return p2;
	}

}

Player* Tournament::run(array<Player*, 8> Players){

Player* WinnerA=Round(Players[0], Players[1]);
Player* WinnerB=Round(Players[2], Players[3]);
Player* WinnerC=Round(Players[4], Players[5]);
Player* WinnerD=Round(Players[6], Players[7]);

Player* Win1=Round(WinnerA, WinnerB);
Player* Win2=Round(WinnerC, WinnerD);

Player* GrandWinner=Round(Win1, Win2);

return GrandWinner;

}
