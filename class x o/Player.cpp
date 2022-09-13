#include "Player.h"
Player::Player(string name, bool win, char type) {
	this->name = name;
	this->win = win;
	this->type = type;
}
//setters
void Player::setName(string name) {
	this->name = name;
}
void Player::setWin(bool win) {
	this->win = win;
}
void Player::setType(char type) {
	this->type = type;
}
//getters
string Player::getName() {
	return name;
}
bool Player::getWin() {
	return win;
}
char Player::getType() {
	return type;
}

//methods
void Player::hello() {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	char welcom[200] = { "welcom, \t\t ******* wish you have fun time \n\0"};
	for (int i = 0; welcom[i] != '\0'; i++)
	{
		SetConsoleTextAttribute(hConsole, 13);
		cout << welcom[i];
		Sleep(100);
	}
	
}
void Player::charX(string name) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char x[200] = { ", your character is ==> X \n\n\0" };
	SetConsoleTextAttribute(hConsole, 11);
	cout << name; Sleep(100);
	for (int i = 0; x[i] != '\0'; i++) {
		cout << x[i];
		Sleep(100);
	}
}
void Player::charO(string name) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char x[50] = { ", your character is ==> O \n\n\0" };
	cout << name; Sleep(100);
	for (int i = 0; x[i] != '\0'; i++) {
		cout << x[i];
		Sleep(100);
	}
}