#include <iostream>
#include <string>
#include "Player.h"
#include "GameDisplay.h"
#include "GamePlay.h"
using namespace std;

Player::Player(){}

//Player::Player(std::string name){
//	this-> name = new char;
//	for(int i= 0; i < sizeof(name);i++){
//		this->name[i] = name[i];
//	}
//}


void Player::test(){
	cout<<"this is a test"<<endl;
}

std::string Player::getName(){
	return name;
}

void Player::setName(std::string name){
	/*this-> name = new char;
	for(int i= 0; i < sizeof(name);i++){
		this->name[i] = name[i];
	}*/
	this->name = name;
}

int Player::getMove(){
	return move;
}

void Player::setMove(int move){
	this->move = move;
}