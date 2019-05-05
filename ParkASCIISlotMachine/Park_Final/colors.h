#ifndef COLORS_H
#define COLORS_H
#include <windows.h>

//**************************************************************************
//this function creates color and its following functions specify which one*
//**************************************************************************
void SetColor(int value)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void SetWhite()
{
	SetColor(7);
}

void SetBlue()
{
	SetColor(11);
}

void SetYellow()
{
	SetColor(14);
}

void SetGreen()
{
	SetColor(10);
}

void SetPink()
{
	SetColor(13);
}

void SetRed()
{
	SetColor(12);
}


void promptLinez()
{
	cout << "How many ";
	SetYellow();
	cout << "LINES ";
	SetGreen();
	cout << "would you like to bet? (";
	SetBlue();
	cout << "1,3,5";
	SetGreen();
	cout << "): ";
}

void promptMoneyz()
{
	cout << "How much ";
	SetYellow();
	cout << "MONEY ";
	SetGreen();
	cout << "would you like to bet ";
	SetYellow();
	cout << "PER LINE? ";
	SetGreen();
	cout << "($";
	SetBlue();
	cout << "1-2000";
	SetGreen();
	cout << "): ";
}

void promptBuyinz()
{
	SetGreen();
	cout << "Enter buy-in amount ($";
	SetYellow();
	cout << "1-10,000";
	SetGreen();
	cout << "): ";
}
#endif
