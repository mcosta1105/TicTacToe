#include <iostream>
#include <string>
#include "Player.h"
#include "GameDisplay.h"
#include "GamePlay.h"
using namespace std;


GameDisplay::GameDisplay()
{			
}

//Set players
void GameDisplay::setPlayers(){
	system("cls");//Cleans the console
	string name1, name2;
	cout<<"Please enter player 1 name: ";
		cin>>name1;	
		p1.setName(name1);
	cout<<"Please enter player 2 name: ";
		cin>>name2;
		p2.setName(name2);
}

//Get option
int GameDisplay::getOption(){
	return option;
}

//set option
void GameDisplay::setOption(){
	int option;
		cin >> option;		
	this->option = option;
}



//Welcom display
void GameDisplay::welcomeDisplay(){
	system("cls");//Cleans the console
	cout<<"\n				     Welcome to\n"<<endl;
	cout<<"	|||||||| ||  |||||  ||||||||  |||||   |||||  ||||||||  |||||  ||||||"<<endl;
	cout<<"	   ||    || ||         ||    ||   || ||         ||    ||   || ||____"<<endl;
	cout<<"	   ||    || ||         ||    ||||||| ||         ||    ||   || ||''''"<<endl;
	cout<<"	   ||    ||  |||||     ||    ||   ||  |||||     ||     |||||  ||||||"<<endl;
	cout<<"\n					Game\n"<<endl;
	cout<<"	===================================================================="<<endl;
	cout<<"	=============================   MENU   ============================="<<endl;
	cout<<"	====================================================================\n"<<endl;
	cout<<"				   1 - Play Game"<<endl;
	cout<<"				   2 - Instructions"<<endl;
	cout<<"				   3 - Exit"<<endl;
	cout<<"\n	===================================================================="<<endl;
	cout<<"				Please choose one option: "<<endl;
	
	
}

//Display instructions
void GameDisplay::displayInstruction(){
	system("cls");//Cleans the console
	cout<<"\n"<<endl;
	cout<<"	|||||||| ||  |||||  ||||||||  |||||   |||||  ||||||||  |||||  ||||||"<<endl;
	cout<<"	   ||    || ||         ||    ||   || ||         ||    ||   || ||____"<<endl;
	cout<<"	   ||    || ||         ||    ||||||| ||         ||    ||   || ||''''"<<endl;
	cout<<"	   ||    ||  |||||     ||    ||   ||  |||||     ||     |||||  ||||||"<<endl;
	cout<<"\n"<<endl;
	cout<<"	===================================================================="<<endl;
	cout<<"	=========================   Instructions   ========================="<<endl;
	cout<<"	====================================================================\n"<<endl;
	cout<<"	This is a game played by two players on a grid of 3 x 3."<<endl;
	cout<<"	One of the players will represent X on the grid while the other will\n	represent O. The players will take turns selecting numbers from 1 to\n	9 to represent the empty squares in the grid."<<endl;
	cout<<"	The first player that gets 3 marks in a row which can be horizontal,\n	vertical or diagonal is the winner"<<endl;
	cout<<"	When all the nine spaces are filled means the game is over and if no\n	one gets the 3 marks in a row means that the game resulted in a draw."<<endl;
	cout<<"\n	===================================================================="<<endl;
	cout<<"		Would you like to play the game right now? (Y/N): "<<endl;
}

//Winner Display
void GameDisplay::winnerDisplay(std::string winner){
	system("cls");//Cleans the console
	cout<<"\n"<<endl;
	cout<<"	|||||||| ||  |||||  ||||||||  |||||   |||||  ||||||||  |||||  ||||||"<<endl;
	cout<<"	   ||    || ||         ||    ||   || ||         ||    ||   || ||____"<<endl;
	cout<<"	   ||    || ||         ||    ||||||| ||         ||    ||   || ||''''"<<endl;
	cout<<"	   ||    ||  |||||     ||    ||   ||  |||||     ||     |||||  ||||||"<<endl;
	cout<<"\n"<<endl;
	cout<<"	===================================================================="<<endl;
	cout<<"	========================   CONGRATULATIONS!   ======================"<<endl;
	cout<<"	====================================================================\n"<<endl;
	cout<<"				The winner is: "<<winner<<endl;
	cout<<"	====================================================================\n"<<endl;
	cout<<"			Would you like to play again? (Y/N): "<<endl;
}

//Game Display
void GameDisplay::drawScreen(){
	system("cls");//Cleans the console
	cout<<"\n"<<endl;
	cout<<"	|||||||| ||  |||||  ||||||||  |||||   |||||  ||||||||  |||||  ||||||"<<endl;
	cout<<"	   ||    || ||         ||    ||   || ||         ||    ||   || ||____"<<endl;
	cout<<"	   ||    || ||         ||    ||||||| ||         ||    ||   || ||''''"<<endl;
	cout<<"	   ||    ||  |||||     ||    ||   ||  |||||     ||     |||||  ||||||"<<endl;
	cout<<"\n"<<endl;
	cout<<"	===================================================================="<<endl;
	cout<<"	==============================   DRAW!   ==========================="<<endl;
	cout<<"	====================================================================\n\n"<<endl;
	cout<<"			Sorry, there is no winner in this match.\n\n"<<endl;
	cout<<"	====================================================================\n\n"<<endl;
	cout<<"			Would you like to play again? (Y/N): "<<endl;
}

//Exit screen
void GameDisplay::exitScreen(){
	system("cls");//Cleans the console
	cout<<"\n"<<endl;
	cout<<"	|||||||| ||  |||||  ||||||||  |||||   |||||  ||||||||  |||||  ||||||"<<endl;
	cout<<"	   ||    || ||         ||    ||   || ||         ||    ||   || ||____"<<endl;
	cout<<"	   ||    || ||         ||    ||||||| ||         ||    ||   || ||''''"<<endl;
	cout<<"	   ||    ||  |||||     ||    ||   ||  |||||     ||     |||||  ||||||"<<endl;
	cout<<"\n"<<endl;
	cout<<"	===================================================================="<<endl;
	cout<<"	======================   Thanks for playing!   ====================="<<endl;
	cout<<"	====================================================================\n"<<endl;
	cout<<"				 Devoleped by Maycon\n\n\n\n\n"<<endl;
}


//Fill board
void GameDisplay::fillBoard(){
	board = new char[9];
	int counter = 0;
	for(char i = '1'; i <= '9' ;i++){
		board[counter] = i;
		counter++;
	}
}

//Game Board
void GameDisplay::gameBoard(){
	system("cls");//Cleans the console

	cout<<"	====================================================================\n"<<endl;
	cout << "		    Player 1: "<<p1.getName()<<" (X)  -  Player 2: "<<p2.getName()<<" (O)" << endl << endl;
	cout<<"	====================================================================\n"<<endl;

	cout << "				     |     |     " << endl;
	cout << "				  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<endl;

	cout << "				_____|_____|_____" << endl;
	cout << "				     |     |     " << endl;

	cout << "				  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<endl;

	cout << "				_____|_____|_____" << endl;
	cout << "				     |     |     " << endl;

	cout << "				  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<endl;

	cout << "				     |     |     " << endl << endl;
	cout<<"	===================================================================="<<endl;	
}

