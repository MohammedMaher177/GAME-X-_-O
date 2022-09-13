#include "Playing.h"

void Playing::play(Player p1,Player p2) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 3; i++) {
		for (int l = 0; l < 3; l++) {
			g[i][l] = ' ';
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			SetConsoleTextAttribute(hConsole, 13);
			cout << "  " << g[i][j];
			SetConsoleTextAttribute(hConsole, 11);
			cout << "  |";
		}
		SetConsoleTextAttribute(hConsole, 11);
		cout << endl << "_____|_____|_____|" << endl << "     |     |     |" << "\n"; Sleep(100);
	}//rasmet el game
	int cont = 1, cel;
	char x = 'X', o = 'O';
	bool flag = false;
	for (cont = 1; cont <= 9; cont++) {
		cin >> cel;
		system("cls");
		if (cont == 1 || cont == 3 || cont == 5 || cont == 7 || cont == 9) {//player 1 x
			switch (cel)
			{
			case 1:
				if (g[0][0] == x || g[0][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][0] = x;
				}
				break;
			case 2:
				if (g[0][1] == x || g[0][1] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][1] = x;
				}
				break;
			case 3:
				if (g[0][2] == x || g[0][2] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][2] = x;
				}
				break;
			case 4:
				if (g[1][0] == x || g[1][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[1][0] = x;
				}
				break;
			case 5:if (g[1][1] == x || g[1][1] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[1][1] = x;
			}
				  break;
			case 6:if (g[1][2] == x || g[1][2] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[1][2] = x;
			}
				  break;
			case 7:
				if (g[2][0] == x || g[2][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[2][0] = x;
				}
				break;
			case 8:if (g[2][1] == x || g[2][1] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[2][1] = x;
			}
				  break;
			case 9:if (g[2][2] == x || g[2][2] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[2][2] = x;
			}
				  break;
			default:
				notAllowed();
				cont--;
				break;
			}
		}
		else if (cont == 6 || cont == 2 || cont == 4 || cont == 8) {
			switch (cel)
			{
			case 1:
				if (g[0][0] == x || g[0][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][0] = o;
				}
				break;
			case 2:
				if (g[0][1] == x || g[0][1] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][1] = o;
				}
				break;
			case 3:
				if (g[0][2] == x || g[0][2] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[0][2] = o;
				}
				break;
			case 4:
				if (g[1][0] == x || g[1][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[1][0] = o;
				}
				break;
			case 5:if (g[1][1] == x || g[1][1] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[1][1] = o;
			}
				  break;
			case 6:if (g[1][2] == x || g[1][2] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[1][2] = o;
			}
				  break;
			case 7:
				if (g[2][0] == x || g[2][0] == o) {
					notAllowed();
					cont--;
				}
				else {
					g[2][0] = o;
				}
				break;
			case 8:if (g[2][1] == x || g[2][1] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[2][1] = o;
			}
				  break;
			case 9:if (g[2][2] == x || g[2][2] == o) {
				notAllowed();
				cont--;
			}
				  else {
				g[2][2] = o;
			}
				  break;
			default:
				notAllowed();
				cont--;
				break;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				SetConsoleTextAttribute(hConsole, 13);
				cout << "  " << g[i][j];
				SetConsoleTextAttribute(hConsole, 11);
				cout << "  |";
			}
			SetConsoleTextAttribute(hConsole, 11);
			cout << endl << "_____|_____|_____|" << endl << "     |     |     |" << "\n"; Sleep(100);
		}//rasmet el game

		if ((g[0][0] == x && g[0][1] == x && g[0][2] == x) ||
			(g[1][0] == x && g[1][1] == x && g[1][2] == x) ||
			(g[2][0] == x && g[2][1] == x && g[2][2] == x) ||
			(g[0][0] == x && g[1][0] == x && g[2][0] == x) ||
			(g[0][1] == x && g[1][1] == x && g[2][1] == x) ||
			(g[2][0] == x && g[2][1] == x && g[2][2] == x)
			) {
			SetConsoleTextAttribute(hConsole, 13);
			cout << p1.name;
			for (int i = 0; win[i] != '\0'; i++) {
				cout << win[i];
				Sleep(100);
			}
			for (int i = 0; cong[i] != '\0'; i++) {
				cout << cong[i];
				Sleep(100);
			}

			flag = true;
			break;
		}
		else if
			(   (g[0][0] == o && g[0][1] == o && g[0][2] == o) ||
				(g[1][0] == o && g[1][1] == o && g[1][2] == o) ||
				(g[2][0] == o && g[2][1] == o && g[2][2] == o) ||
				(g[0][0] == o && g[1][0] == o && g[2][0] == o) ||
				(g[0][1] == o && g[1][1] == o && g[2][1] == o) ||
				(g[2][0] == o && g[2][1] == o && g[2][2] == o)
				) {
			SetConsoleTextAttribute(hConsole, 13);
			SetConsoleTextAttribute(hConsole, 13);
			cout << p2.name;
			for (int i = 0; win[i] != '\0'; i++) {
				cout << win[i];
				Sleep(100);
			}
			for (int i = 0; cong[i] != '\0'; i++) {
				cout << cong[i];
				Sleep(100);
			}
			flag = true;
			break;
		}
	}
	if (flag == false) {
		cout << "game over, I wish you like this game";
	}
	system("PAUSE");
}


void Playing::notAllowed() {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	char b[200] = { "not allowed, please enter the correct chois MR, \n\0" };
	for (int i = 0; b[i] != '\0'; i++) {
		cout << b[i];
		Sleep(100);
	}
}
