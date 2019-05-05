#ifndef PRINTSLOTS_H
#define PRINTSLOTS_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "outco.h"
#include "colors.h"

int yLine = 1;
int xLine = 0;

string skeleton = {
	"\t\t\t----------------------------------------------------------------------\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t----------------------------------------------------------------------\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t----------------------------------------------------------------------\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t|                     |                     |                        |\n"
	"\t\t\t----------------------------------------------------------------------\n"
};

vector <string> iSeven = {
	"    _____ ",
	"   /__   / ",
	"     /  / ",
	"    /  / ",
	"   /__/ ",
};

vector <string> iCherry = {
	"  | ",
	"  |\\ ",
	"   \\|_\\_ ",
	"    (_)_) ",
	"      (_) ",
};

/*
vector <string> iShamrock = {
	"    .-.-. ",
	" __ \\   / __ ",
	"(  ` \\.'.'  ) ",
	"(__.', \\ .__) ",
	"    /   \\`===, ",
	"    `-^-' ",
};
*/
vector <string> iShamrock = {
	"    .-.-.     ",
	" __ \\   / __  ",
	"(  ` \\.'.'  ) ",
	"(__.', \\ .__) ",
	"    /   \\`===,",
	"    `-^-'     ",
};


vector <string> iBolt = {
	"      _/  / ",
	"     / __/ ",
	"   _/ / ",
	"  /__/ ",
	" // ",
	"/' ",
};

vector <string> iDiamond = {
	"    _________ ",
	" _ /_|_____|_\\ _ ",
	"   '. \\   / .' ",
	"     '.\\ /.' ",
	"       '.' ",
};

vector <string> iMoney = {
	"   ___ ",
	"  `___' ",
	" / $$$ \\ ",
	"(  $$$  ) ",
	" `-----' ",
};


vector <string> iBox1 = {
	"|--------------------------------------------------------------------|",
};

vector <string> iBox2 = {
	"|--------------------------------------------------------------------------------------------|",
};

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void print7()
{
	//SetRed();
	SetPink();
	for (auto line : iSeven)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}

void printCherry()
{
	SetRed();
	for (auto line : iCherry)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}

void printShamrock()
{
	//SetGreen();
	SetColor(46);
	for (auto line : iShamrock)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}

void printDiamond()
{
	SetBlue();
	xLine -= 2;
	for (auto line : iDiamond)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}


void printBolt()
{
	SetYellow();
	for (auto line : iBolt)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}

void printMoney()
{
	SetGreen();
	xLine += 2;
	for (auto line : iMoney)
	{
		gotoxy(xLine, yLine);
		cout << line << "\n";
		yLine++;
	}
}

void printWalletBox()
{
	int i = 10;
	for (auto line : iBox1)
	{
		gotoxy(0, i);
		cout << line << "\n";
		i++;
	}
}
void printReelBox()
{
	int i = 30;
	for (auto line : iBox2)
	{
		gotoxy(0, i);
		cout << line << "\n";
		i++;
	}
}

void topleft()
{
	yLine = 4;
	xLine = 29;
}

void topmid()
{
	yLine = 4;
	xLine = 51;
}

void topright()
{
	yLine = 4;
	xLine = 74;
}

void centerleft()
{

	yLine = 11;
	xLine = 29;
}

void centermid()
{
	yLine = 11;
	xLine = 51;
}

void centerright()
{
	yLine = 11;
	xLine = 74;
}

void botleft()
{
	yLine = 18;
	xLine = 29;
}

void botmid()
{
	yLine = 18;
	xLine = 51;
}

void botright()
{
	yLine = 18;
	xLine = 74;
}
#endif