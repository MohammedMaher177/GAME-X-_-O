#pragma once
#include"Player.h"
#include<iostream>
#include<string>
#include<Windows.h>
#include<ctime>
#include<fstream>

using namespace std;

class Board
{
public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char g[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	//methods
	void hello();
	void welcome();
	void name1();
	void name2();
	void thank();
	void inst();
	void paint();
};

