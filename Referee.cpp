#include "Referee.h"

using namespace std;

Referee::Referee()
{
}

void Referee::newRefGame(Player p1, Player p2)
{

	p1m = p1.makeMove();
	p2m = p2.makeMove();
	// match two players and return their game result
	switch (p1m)
	{
	case 'R':
		if (p2m == ('R'))
		{
			Outcome = 'T';
		}
		else if (p2m == ('P'))
		{
			Outcome = 'L';
		}
		else
		{
			Outcome = 'W';
		}
		break;
	case 'P':
		if (p2m == ('R'))
		{
			Outcome = 'W';
		}
		else if (p2m == ('P'))
		{
			Outcome = 'T';
		}
		else
		{
			Outcome = 'L';
		}
		break;
	case 'S':
		if (p2m == ('R'))
		{
			Outcome = 'L';
		}
		else if (p2m == ('P'))
		{
			Outcome = 'W';
		}
		else
		{
			Outcome = 'T';
		}
		break;
	}

if (Outcome=='L')
{
	p2.win();
}
else if (Outcome=='W')
{
	p1.win();
}

}