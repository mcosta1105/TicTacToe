
class GameDisplay: public Player{
protected:
	//Attributes
	Player p1;
	Player p2;
	char* board;
	int option;
public:
	//Constructor
	GameDisplay();
	//Functions
	void welcomeDisplay();
	void displayInstruction();
	void winnerDisplay(std::string);
	void drawScreen();
	void exitScreen();
	void gameBoard();
	void fillBoard();
	
	//Setters
	void setPlayers();
	void setOption();

	//Getters
	int getOption();
	
};

