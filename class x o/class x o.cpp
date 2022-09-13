#include <iostream>
#include"Player.h"
#include"Board.h"
#include"Playing.h"
using namespace std;

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	Board b;
	Player p1, p2;
	string x;
	char g;
	bool win;
	int h;
	//char g[3][3];
	Playing ing;
	b.hello();
	b.name1();
	cin >> x;
	p1.setName(x);
	b.name2();
	cin >> x;
	p2.setName(x);
	system("CLS");
	b.welcome();
	p1.charX(p1.name);
	p2.charO(p2.name);
	b.thank();
	system("CLS");
	b.inst();
	b.paint();
	p1.setType('X');
	p2.setType('O');
	int temp;
	do
	{
		ing.play(p1, p2);
		cout << "do you play again \n\n1- yes \n2- no\n\n\0";
		cin >> temp;
		system("CLS");
	} while (temp == 1);
	system("pause");
	
}