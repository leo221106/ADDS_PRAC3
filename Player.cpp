#include "Player.h"
#include <iostream>
using namespace std; // namespace std;

Player::Player() {

}

Player::~Player() {}

char Player::makeMove()
{
}

void Player::win()
{
	this->winCount++;
}

void Player::doMove()
{
	this->moveCount++;
}

void Player::clearWinCount()
{
	this->winCount = 0;
}
void Player::clearMoveCount()
{
	this->moveCount = 0;
}

int Player::getMoveCount(){
	return this->moveCount;
}

int Player::getWinCount(){
	return this->winCount;
}

void Player::changeMove(char m){
	this->Move = m;
}

char Player::getMove(){
	return this->Move;
}