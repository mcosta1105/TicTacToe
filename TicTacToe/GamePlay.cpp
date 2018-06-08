#include <iostream>
#include <string>
#include "Player.h"
#include "GameDisplay.h"
#include "GamePlay.h"
using namespace std;

//Constructor
GamePlay::GamePlay()
{	gui.welcomeDisplay();
	setOption();
	checkMenu();
}

//Get Play option Y/N
char GamePlay::getPlay(){
	return play;
}

//Set Play Y/N
void GamePlay::setPlay(){
	char play;
		cin>>play;
		play = toupper(play);
		this->play = play;
}

//Check Play Y/N
void GamePlay::checkPlay(){
	if(getPlay() == 'Y'){
		fillBoard();
		startGame();
	}
	else if(getPlay() == 'N'){
		exitScreen();
	}
	else{
		cout<<"Sorry, invlaid option. Please try again"<<endl;
		setPlay();
		checkPlay();
	}
}

//Check menu option
void GamePlay::checkMenu(){	
	try{
		if(getOption() == 1){
			setPlayers();//Sets players for the game
			fillBoard();
			startGame();
		}
		else if(getOption() == 2){
			displayInstruction();
			setPlay();
			checkPlay();
		
		}
		else if(getOption() == 3){
			exitScreen();
		}
		else{
			throw "Invalid input, please try again";
			
		}
	}
	catch(const char* e){
		cout<<e<<endl;
	}
}

//Start the game
void GamePlay::startGame(){
	//local variables
	int move;
	int turn = 1;
	string player;
	int winner;
	char mark;

	//Do while check winner is -1
	do{
		//set players in board
		gameBoard();
		if(turn % 2){
			turn = 1;
			player = p1.getName();
			mark = 'X';
		}
		else{
			turn = 2;
			player = p2.getName();
			mark = 'O';
		}

		//Player turn
		cout << "\n				Player: "<<player<<endl;
		cout << "				Enter a number:  ";
			cin>>move;
			
		//Check for player move
		if (move == 1 && board[0] == '1'){
			board[0] = mark;
		}
		else if (move == 2 && board[1] == '2'){
			board[1] = mark;
		}
		else if (move == 3 && board[2] == '3'){
			board[2] = mark;
		}
		else if (move == 4 && board[3] == '4'){
			board[3] = mark;
		}
		else if (move == 5 && board[4] == '5'){
			board[4] = mark;
		}
		else if (move == 6 && board[5] == '6'){
			board[5] = mark;
		}
		else if (move == 7 && board[6] == '7'){
			board[6] = mark;
		}
		else if (move == 8 && board[7] == '8'){
			board[7] = mark;
		}
		else if (move == 9 && board[8] == '9'){
			board[8] = mark;
		}
		else
		{
			cout<<"This is an invalid move, please choose another number ";
			turn--;
			cin.ignore();
			cin.get();
		}
		//Check if there is a winner
		winner = checkWinner();

		turn++;
	}while(winner == -1);

	turn--;

	//If winner check who is winner
	if(winner ==1){
		if(turn == 1){
			winnerDisplay(p1.getName());
			
		}else{
			winnerDisplay(p2.getName());			
		}
		setPlay();
		checkPlay();
			
		
	}	//Else it is a draw		
	else{
		drawScreen();
		setPlay();
		checkPlay();
	}		
}


//Check winner

int GamePlay::checkWinner(){
	if(board[0] == board[1] && board[1] == board[2]){
		return 1;//Winner
	}
	else if(board[0] == board[4] && board[4] == board[8]){
		return 1;//Winner
	}
	else if(board[0] == board[3] && board[3] == board[6]){
		return 1;//Winner
	}
	else if(board[3] == board[4] && board[4] == board[5]){
		return 1;//Winner
	}
	else if(board[6] == board[4] && board[4] == board[2]){
		return 1;//Winner
	}
	else if(board[6] == board[7] && board[7] == board[8]){
		return 1;//Winner
	}
	else if(board[1] == board[4] && board[4] == board[7]){
		return 1;//Winner
	}
	else if(board[2] == board[5] && board[5] == board[8]){
		return 1;//Winner
	}else{
		int allDifferentCounter = 0;
		int counter = 0;
		for(char i = '1'; i <= '9'; i++){
			if(board[counter] != i){
				allDifferentCounter++;
				if(allDifferentCounter == 9){
					return 0; // If returns 0 it is a draw
				}
			}
			counter++;
		}	
		//counter = 0;
		return -1;//No winner or draw yet
	}
	
}