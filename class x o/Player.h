#pragma once
#include<string>
#include"Board.h"
using namespace std;
class Player
{
public:
	string name;
	bool win;
	char type;
	
public:
	//constructor
	Player() {
		name = " ";
		win = false;
		type = ' ';
	}
	Player(string name, bool win, char type);

	//setters
	void setName(string name);
	void setWin(bool win);
	void setType(char typr);

	//getters
	string getName();
	bool getWin();
	char getType();

	//methods
	void hello();
	void charX(string name);//instraction
	void charO(string name);
};

