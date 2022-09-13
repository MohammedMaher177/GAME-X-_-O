#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
#include<ctime>
#include<fstream>
#include "Player.h"
#include"Board.h"
using namespace std;


class Playing :
   
    public Player , public Board
{
public:
    char win[200] = { "  you win\n\n\n\n     Congratulation  \n\nTake your gift \n\0" };
    char cong[300] = { "                  _......_\n         , __.-'\______\\'.______\n         >`  '-`.--------'---`-`-`-.\n        /    .-. \________ "" .-.  =\ \n    >>> '---( o )----------( o )--'\n             '-'              '-'\n\n\0" };

    void play(Player p1,Player p2);
    void notAllowed();
};

