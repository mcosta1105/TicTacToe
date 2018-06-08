#pragma once
class GamePlay: public GameDisplay
{	protected:
		//Attributes
		GameDisplay gui;
		char play;		
	public:
		//Constructor
		GamePlay();

		//Functions
		void checkMenu();
		void startGame();
		void checkPlay();
		int checkWinner();

		//Getter
		char getPlay();

		//setter
		void setPlay();
};

