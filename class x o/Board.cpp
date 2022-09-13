#include "Board.h"

void Board::hello() {
	char hello[200] = { "\t\t\t\t**********  Wlcome to X_O game  ********** \n\n\n\0" };
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	for (int i = 0; hello[i] != '\0'; i++){
		SetConsoleTextAttribute(hConsole, 13);
		cout << hello[i];
		Sleep(100);
	}	
}
void Board::name1() {
	char name1[200] = { "Hello, \t please enter firest player name: \n\0" };
	for (int i = 0; name1[i] !='\0'; i++)
	{
		SetConsoleTextAttribute(hConsole, 13);
		cout << name1[i];
		Sleep(100);
	}
}
void Board::name2() {
	char name2[200] = { "please enter second player name: \n\0" };
	for (int i = 0; name2[i] != '\0'; i++)
	{
		SetConsoleTextAttribute(hConsole, 13);
		cout << name2[i];
		Sleep(100);
	}
}
void Board::welcome() {
	char welcom[200] = { "welcom, \t\t ******* wish you have fun time \n hello, \n\0" };
	for (int i = 0; welcom[i] != '\0'; i++)
	{
		SetConsoleTextAttribute(hConsole, 13);
		cout << welcom[i];
		Sleep(100);
	}
}
void Board::thank() {
	char thank[200] = { "\t\t\t\t******* lets play my friends *******\n\n\0" };
	for (int i = 0; thank[i] != '\0'; i++) {
		cout << thank[i];
		Sleep(100);
	}
}
void Board::inst() {
	char inst[400] = { "\n\n\t\t\t\ ******* ^ـ-ـ^ instructions ^ـ-ـ^ ******* \n\nEach player must enter the num of  his cell choice\n\n\t\t\tThe game is starting lets play \n\n\n\n\0" };
	for (int i = 0; inst[i] != '\0'; i++) {
		SetConsoleTextAttribute(hConsole, 11);
		cout << inst[i];
		Sleep(100);
	}
}
void Board::paint() {
	SetConsoleTextAttribute(hConsole, 13);
	char g[3][3] = { '1','2','3','4','5','6','7','8','9' };
	SetConsoleTextAttribute(hConsole, 11);
	cout << "     |     |     |" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			SetConsoleTextAttribute(hConsole, 13);
			cout << "  " << g[i][j];
			Sleep(100);
			SetConsoleTextAttribute(hConsole, 11);
			cout << "  |";
		}
		SetConsoleTextAttribute(hConsole, 11);
		cout << endl << "_____|_____|_____|" << endl << "     |     |     |" << "\n";
	}//rasmet el game
	char let[200] = { "\t\t\t\tlets play ^_^\n\nplease enter the num of cel \n\0" };
	for (int i = 0; let[i] != '\0'; i++) {
		cout << let[i];
		Sleep(100);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			g[i][j] = ' ';
	}//3ashan afady el mrb3at
	system("PAUSE");
	system("CLS");
}

