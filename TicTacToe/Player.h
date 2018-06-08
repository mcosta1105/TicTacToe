#include<string>
class Player
{	protected:
		//Attributes
		std::string name;
		int move;
	public:

		Player();
		//Player(std::string name);

		void test();

		//Getter
		std::string getName();
		int getMove();

		//Setter
		void setName(std::string);
		void setMove(int);
};

