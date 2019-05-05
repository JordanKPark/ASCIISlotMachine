//NAME:		  JORDAN PARK
//DATE:       12/14/2016
//ASSIGNMENT: FINAL
//SUMMARY:    SLOT MACHINE

#include <iostream>
#include <string>
#include <fstream> 
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <queue>

#include <conio.h>
#include <windows.h>
#include <MMSystem.h>
#include "outco.h"
#include "colors.h"
#include "printslots.h"

using namespace std;

ofstream ofs("Park_Final.txt");

//**************************************************************************
//GLOBAL VARIABLES                                                         *
//**************************************************************************
string no = "EoF Message ";
string hard = "Jordan Park ";
string coding = " ";
string of = "12/14/2016 CIS 2542-002 ";
string labn = "Final ";

string ftr1 = "Printed: Slot stats, win/loss, money";

string pipeline = "|-----------------------------------------------------------------------------------|";
string mpipe = "|------------------------------------------------------------------------------|";
string mpipe2 = "|-----------------------------------------------|";
string pipe = "|";
string spaceline = "|                                                                                   |";
string colon = ": ";
string colon1 = ":";
string spc = " ";
string spc2 = "     ";
string pls = "+";
string equ = "=";
string tab = "\t";
string dolla = "$";
string percent = "%";

string error = "Error: Out of the scope of the menu!";

string jp1 = "    _            _             ___          _";
string jp2 = " _ | |___ _ _ __| |__ _ _ _   | _ \\__ _ _ _| |__";
string jp3 = "| || / _ \\ '_/ _` / _` | ' \\  |  _/ _` | '_| / /";
string jp4 = " \\__/\\___/_| \\__,_\\__,_|_||_| |_| \\__,_|_| |_\\_\\";

string course1 = "  ___ ___ ___    ___ ___ _ _ ___     __   __ ___";
string course2 = " / __|_ _/ __|__|_  ) __| | |_  )__ /  \\ /  \\_  )";
string course3 = "| (__ | |\\__ \\___/ /|__ \\_  _/ /___| () | () / /";
string course4 = " \\___|___|___/  /___|___/ |_/___|   \\__/ \\__/___|";

string date1 = " ___   _ _____ ___ _   _ ___    _ _ _     ___ __  _  __ ";
string date2 = "|   \\ /_\\_   _| __(_) / |_  )__/ | | | __|_  )  \\/ |/ / ";
string date3 = "| |) / _ \\| | | _| _  | |/ /___| |_  _|___/ / () | / _ \\";
string date4 = "|___/_/ \\_\\_| |___(_) |_/___|  |_| |_|   /___\\__/|_\\___/";

string lab1 = " ___ ___ _  _   _   _    ";
string lab2 = "| __|_ _| \\| | /_\\ | |   ";
string lab3 = "| _| | || .` |/ _ \\| |__ ";
string lab4 = "|_| |___|_|\\_/_/ \\_\\____|";

string title1 = " ___ _    ___ _____ ___ ";
string title2 = "/ __| |  / _ \\_   _/ __|";
string title3 = "\\__ \\ |_| (_) || | \\__ \\";
string title4 = "|___/____\\___/ |_| |___/";
                   
string rules1 = "\t\t\t ___ _   _ _    ___ ___ \n"
"\t\t\t| _ \\ | | | |  | __/ __|\n"
"\t\t\t|   / |_| | |__| _|\\__ \\\n"
"\t\t\t|_|_\\\\___/|____|___|___/";

string wallet1 = "\t\t\t\t__      ___   _    _    ___ _____ \n"
				 "\t\t\t\t\\ \\    / /_\\ | |  | |  | __|_   _|\n"
				 "\t\t\t\t \\ \\/\\/ / _ \\| |__| |__| _|  | |  \n"
				 "\t\t\t\t  \\_/\\_/_/ \\_\\____|____|___| |_|\n";
string option1 = "              __          \n"
				 " /|     __   |__)   | _ _ \n"
				 "  |          | \\ |_||(-_) ";

string option2 = " __                        \n"
				 "  _)    __   |  | _ || _|_ \n"
				 " /__         |/\\|(_|||(-|_ ";

string option3 = " __           __          __          \n"
				 "  _)    __   |__)| _     / _  _  _  _ \n"
				 " __)         |   |(_|\\/  \\__)(_||||(- \n"
				 "                     /                ";
                      
string option4 = "              __        \n"
				 "|__|    __   /  \\   .|_ \n"
				 "   |         \\_\\/|_|||_ ";

string Menu[4] = { option1, option2, option3, option4 };

string YESNO[2] = { "\t\t\t Yes", "\t\tNo" };

string prompt1 = " __                      _                         ";
string prompt2 = "|_  _ |_ _ _  _|_|_   _ (_   _    . _|  _ . _|  _. ";
string prompt3 = "|__| )|_(-|   -|-|-  (_)|   (_||_||(_|(|_)|(_|(_). ";
string prompt4 = "                              |        |           ";

string prompt21 = " __                /     _                               /         __   __ \\  ";
string prompt22 = "(_  _| _ _|_  _|_|_  _  (_ _  _   _    . _|  _ . _|  _  (  /| __  /__  (__\\ ) ";
string prompt23 = "__)(-|(-(_|_  -|-|- _)  | (_)|   (_||_||(_|(|_)|(_|(_)   \\  |     \\__)  __//  ";
string prompt24 = "                                   |        |                                 ";


string end1 = " _______ _    _ ______   ______ _   _ _____  _ ";
string end2 = "|__   __| |  | |  ____| |  ____| \\ | |  __ \\| |";
string end3 = "   | |  | |__| | |__    | |__  |  \\| | |  | | |";
string end4 = "   | |  |  __  |  __|   |  __| | . ` | |  | | |";
string end5 = "   | |  | |  | | |____  | |____| |\\  | |__| |_|";
string end6 = "   |_|  |_|  |_|______| |______|_| \\_|_____/(_)";

string hold;

string errorChar = "Error: A character was entered and found. ";
string errorNum = "Error: I don't think that's a number, yo! ";
string proDig = "Enter a digit : ";

string errorVBetw = "Error: Value must be between ";
string sAnd = " and ";
string period = ".";
string tryagain = "Please try again: ";
string errorlines = "Error: value is not 1, 3, or 5. ";
string qBuyin = "Buy in? ";
string qSpin = "Spin again? ";
string eBuyinA = "Enter buy-in amount ($1-10,000): ";
string walletC = "Wallet: ";
string promptLine = "How many LINES would you like to bet? (1,3,5): ";
string promptMoney = "How much MONEY would you like to bet PER LINE? ($1-1000): ";
string nofunds = "Error: you do not have enough money to bet that. (";
string current$ = "Current money: $";
string current$2 = "Current money: ";
string uhave$ = "You now have: $";
string SHAM = "Shamrock";
string sSeven = "7";
string sCherry = "Cherry";
string sMoney = "$";
string sDiamond = "Diamond";
string sBolt = "Bolt";
string sShamrock = "Shamrock";
string showLoss = "\t\t\t\t\t\t    You lose! :(";
string showWin = "\t\t\t\t\t\t    You win! :)";
string errorNo$ = "You have no money!";
string errorNo$2 = "You do not have enough to bet for those amount of lines. (";
string returnmenu = "Returning to menu screen.";
string endPar = ")";
string cWallet = "Wallet: ";
string cLines = "Lines: ";
string cTotalBet = "Total Bet: ";
string timesPlayed = "Times PLAYED";
string timesWon = "Times WON";
string timesLost = "Times LOST";
string winPercentage = "Win percentage";
string moneyWon = "Money WON";
string moneyLost = "Money LOST";
string pressSPACE = "Press SPACE to continue . . .";
string startpipe1 = "          |";
string startpipe2 = "           |";
string endpipe1 = "           |";
string endpipe2 = "                           |";
string walletline = "|--------------------------------------------------------------------|\n";
string slotline = "                        |--------------------------------------------------------------------|";
string slotline2 = "|--------------------------------------------------------------------------------------------|\n";

string rules =
"   |------------------------------------------------------------------|\n"
"   |A slot machine is machine with 1 reel that will spin. Players     |\n"
"   |start the process by choosing the number of lines and then        |\n"
"   |placing a bet. The objective of slot machines is to win money by  |\n"
"   |matching symbols on each reel to create a (winning) combination.  |\n"
"   |------------------------------------------------------------------|\n";

vector <string> reelOPTIONS = { "7", "Cherry", "$", "Diamond", "Bolt", "Shamrock" };
//vector <int> OPTIONS1 = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
vector <int> OPTIONS1 = { 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5 };
vector <int> WINNING1 = { 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0 };

vector <string> reelONE(3);
vector <string> reelTWO(3);
vector <string> reelTHREE(3);

queue <int> wins;
queue <int> losses;

int r;
int u;
int n;
int a;
int b;
int c;
int d;
int e;
int f;
int aLines;
int aMoneys;
int pointer = 0;
int zero = 0;

double wincount = 0;
double losscount = 0;
double timesplayed;
int moneywon = 0;
int moneylost = 0;
double winpercent;
int tatebet;

bool program = true;
bool program2 = true;
bool mline, tline, bline, ldline, rdline;
bool iswinn;

int userMoney = 1000;
int wint = 0;
int gamecount = 0;


//**************************************************************************
//The MASTER VARIABLE to control how often a person wins (winrate)         *
//**************************************************************************
//**************************************************************************
int WINVARIABLE = 50; //****************************************************
//**************************************************************************
//**************************************************************************

//**************************************************************************
//this function will create the header.                                    *
//**************************************************************************
void hdr()
{
	ofs << pipeline << endl;
	ofs << pipe << hard << setw(24) << of << setw(47) << left << labn << pipe << endl;
	ofs << pipeline << endl;
	ofs << spaceline << endl;
}
//**************************************************************************
//this function will create the footer.                                    *
//**************************************************************************
void ftr()
{
	ofs << pipeline << endl;
	ofs << spaceline << endl;
	ofs << pipeline << endl;
	ofs << pipe << left << setw(83) << ftr1 << left << pipe << endl;
	ofs << pipeline << endl;
	ofs << spaceline << endl;
}
//**************************************************************************
//this function will create the EoF Message                                *
//**************************************************************************
void eof()
{
	ofs << pipeline << endl;
	ofs << pipe << no << hard << left << setw(24) << of << setw(35) << labn << pipe << endl;
	ofs << pipeline << endl;
}
//**************************************************************************
//this function seeds the random function generators                       *
//**************************************************************************
void seed()
{
	srand((unsigned int)time(NULL));
}
//**************************************************************************
//this function sets the window size                                       *
//**************************************************************************
void SetWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle 
	SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size 
	SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size 
}
//***************************************************************************
//this function returns a random number and takes in a min and max for the  *
//the number to be between.													*
//***************************************************************************
int RNG(int min, int max)
{
	max = max + 1;
	r = rand() % (max - 1) + min;
	return r;
}
//***************************************************************************
//this is a custom function for me to pause (requiring the spacebar to be hit*
//***************************************************************************
void pause()
{
	char UserInput = NULL;
	while (_kbhit()) _getch();
	SetPink();
	cout << endl << pressSPACE << endl << endl;
	while ((UserInput = _getch()) != ' ')
	{
	}
}
//***************************************************************************
//this function attempts to clear the key state of the keyboard             *
//***************************************************************************
void clear2()
{
	while (_kbhit()) _getch();
}
//***************************************************************************
//All clearing techniques compiled in one function                          *
//***************************************************************************
void megaclear()
{
	cls();
	cin.clear();
	cin.ignore();
	clear2();
}
//***************************************************************************
//this function creates the start screen with name, course, date and midterm*
//***************************************************************************
void startsc()
{
	
	PlaySound(TEXT("MarioSlots.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
	SetYellow();
	//SetBlue();
	cout << tab << tab << jp1 << endl;
	cout << tab << tab << jp2 << endl;
	cout << tab << tab << jp3 << endl;
	cout << tab << tab << jp4 << endl;
	cout << endl;
	//SetYellow();
	cout << tab << tab << course1 << endl;
	cout << tab << tab << course2 << endl;
	cout << tab << tab << course3 << endl;
	cout << tab << tab << course4 << endl;
	cout << endl;
	//SetGreen();
	cout << tab << tab << date1 << endl;
	cout << tab << tab << date2 << endl;
	cout << tab << tab << date3 << endl;
	cout << tab << tab << date4 << endl;
	cout << endl;
	//SetRed();
	cout << tab << tab << lab1 << endl;
	cout << tab << tab << lab2 << endl;
	cout << tab << tab << lab3 << endl;
	cout << tab << tab << lab4 << endl;
	cout << endl;
	pause();
}
//**************************************************************************
//this function creates an end screen "The End" in ascii                   *
//**************************************************************************
void endsc()
{
	cls();
	//PlaySound(TEXT("dinger.wav"), NULL, SND_SYNC);
	//PlaySound(TEXT("crowd.wav"), NULL, SND_ASYNC);
	SetGreen();
	cout << tab << tab << tab << tab << end1 << endl;
	SetYellow();
	cout << tab << tab << tab << tab << end2 << endl;
	SetBlue();
	cout << tab << tab << tab << tab << end3 << endl;
	SetRed();
	cout << tab << tab << tab << tab << end4 << endl;
	SetYellow();
	cout << tab << tab << tab << tab << end5 << endl;
	SetGreen();
	cout << tab << tab << tab << tab << end6 << endl << endl << endl;
}
//*****************************************************************************
//CONCEPT 1: SEARCHING AND SORTING- verifying by searching array of input.    *
//this function checks for errors: to see if the input contains any characters*
//using dynamic allocation and pointers                                       *
//*****************************************************************************
bool checkChar(string q)
{
	bool foundit = false;
	char w;
	char *point = new char[q.size() + 1];
	point[q.size()] = 0;
	memcpy(point, q.c_str(), q.size());
	for (unsigned int i = 0; i < q.size(); i++)
	{
		w = point[i];
		if (isalpha(w))
		{
			foundit = true;
		}
	}
	delete[] point;
	return foundit;
}
//**************************************************************************
//this function checks to make sure that the input is indeed a number      *
//**************************************************************************
bool checkNum(string q)
{
	bool foundit = false;
	char w;
	char *point = new char[q.size() + 1];
	point[q.size()] = 0;
	memcpy(point, q.c_str(), q.size());
	for (unsigned int i = 0; i < q.size(); i++)
	{
		if (point[0] == '-' && i == 0)
		{
		}
		else
		{
			w = point[i];
			if (isdigit(w))
			{
				foundit = true;
			}
			else
			{
				delete[] point;
				return false;
			}
		}
	}
	delete[] point;
	return foundit;
}
//**************************************************************************
//this function initiates the check for input and is the prompter of input *
//**************************************************************************
int fillN()
{
	SetYellow();
	getline(cin, hold);
	SetGreen();
	while (checkChar(hold))
	{
		SetRed();
		cout << endl << errorChar << endl << endl;
		SetGreen();
		cout << proDig;
		SetYellow();
		getline(cin, hold);
		SetGreen();
	}
	while (checkNum(hold) == false)
	{
		if (cin.fail())
		{
			cin.clear();
		}
		SetRed();
		cout << endl << errorNum << endl << endl;
		SetGreen();
		cout << proDig;
		SetYellow();
		getline(cin, hold);
		SetGreen();
	}
	u = atoi(hold.c_str());
	return u;
}
//***************************************************************************
//this function displays "SLOTS" in big ascii letters                       *
//***************************************************************************
void displayTitle()
{
	SetGreen();
	cout << tab << tab << tab << tab << title1 << endl;
	SetYellow();
	cout << tab << tab << tab << tab << title2 << endl;
	SetBlue();
	cout << tab << tab << tab << tab << title3 << endl;
	SetRed();
	cout << tab << tab << tab << tab << title4 << endl << endl;
	SetGreen();
}
//***************************************************************************
//this function displays converts the win variable into a small translatable* 
//variable that will be used later for winrate.                             *
//***************************************************************************
void convWinVar()
{
	if (WINVARIABLE == 0)
	{
		wint = 0;
	}
	else if (WINVARIABLE > 0 && WINVARIABLE <= 10)
	{
		wint = 1;
	}
	else if (WINVARIABLE > 10 && WINVARIABLE <= 20)
	{
		wint = 2;
	}
	else if (WINVARIABLE > 20 && WINVARIABLE <= 30)
	{
		wint = 3;
	}
	else if (WINVARIABLE > 30 && WINVARIABLE <= 40)
	{
		wint = 4;
	}
	else if (WINVARIABLE > 40 && WINVARIABLE <= 50)
	{
		wint = 5;
	}
	else if (WINVARIABLE > 50 && WINVARIABLE <= 60)
	{
		wint = 6;
	}
	else if (WINVARIABLE > 60 && WINVARIABLE <= 70)
	{
		wint = 7;
	}
	else if (WINVARIABLE > 70 && WINVARIABLE <= 80)
	{
		wint = 8;
	}
	else if (WINVARIABLE > 80 && WINVARIABLE <= 90)
	{
		wint = 9;
	}
	else if (WINVARIABLE > 90)
	{
		wint = 10;
	}
}
//***************************************************************************
//this function manipulates a vector for fixing the winrate by having a     *
//vector full of 0's and 1's.                                               *
//***************************************************************************
void fixwinrate()
{
	for (int i = 0; i < wint; i++)
	{
		WINNING1[i] = 1;
	}
}
//****************************************************************************
//CONCEPT 2: STL COMMAND - random_shuffle() is used here to help fix win rate*
//****************************************************************************
void fixgame()
{
	convWinVar();
	fixwinrate();
	random_shuffle(WINNING1.begin(), WINNING1.end());
}
//***************************************************************************
//this function shuffles the 0's and 1's unpredictable time of wins and loss*
//***************************************************************************
void shufflerate()
{
	random_shuffle(WINNING1.begin(), WINNING1.end());
}
//***************************************************************************
//this function checks the buy-in range as well as the bet range.           *
//***************************************************************************
int buyRange(int min, int max)
{
	d = fillN();
	while (d < min || d > max)
	{
		SetRed();
		cout << endl << errorVBetw << min << sAnd << max << period << endl << endl;
		SetGreen();
		cout << tryagain;
		d = fillN();
	}
	return d;
}
//***************************************************************************
//this function validates whether the user has chosen 1 line                *
//***************************************************************************
int lineRange()
{
	c = fillN();
	//while (c != 1 && c != 3 && c!= 5)
	while(c != 1)
	{
		SetRed();
		cout << endl << errorlines << endl << endl;
		SetGreen();
		cout << tryagain;
		c = fillN();
	}
	return c;
}
//***************************************************************************
//this function displays the rules back to the user                         *
//***************************************************************************
void displayRules()
{
	cls();
	SetBlue();
	cout << rules1 << endl << endl;
	SetGreen();
	cout << rules;
	pause();
}
//***************************************************************************
//this function allows the use of the keyboard (left and right arrows) to   *
//choose "yes" or "no".                                                     *
//***************************************************************************
int YorN(int x)
{
	pointer = 0;
	program2 = true;
	while (program2)
	{
		cout << "\r";
		if (x == 1)
		{
			SetGreen();
			cout << pipe << qBuyin;
		}
		else if (x == 2)
		{
			SetGreen();
			cout << pipe << qSpin;
		}
		if (x == 1)
		{
			cout << startpipe1;
		}
		else if (x == 2)
		{
			cout << startpipe2;
		}
		for (int i = 0; i < 2; i++)
		{
			if (i == pointer)
			{
				SetYellow();
				cout << YESNO[i];
			}
			else
			{
				SetGreen();
				cout << YESNO[i];
			}
		}
		SetGreen();
		if (x == 1)
		{
			cout << endpipe1;
		}
		else if (x == 2)
		{
			cout << endpipe2;
		}
		while (true)
		{
			if (GetAsyncKeyState(VK_LEFT) < 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 1;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RIGHT) < 0)
			{
				pointer += 1;
				if (pointer == 2)
				{
					pointer = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) < 0)
			{
				switch (pointer)
				{
				case 0:
					return 1;
					program2 = false;
					break;
				case 1:
					return 2;
					program2 = false;
					break;
				}
				break;
			}
			else
			{
				clear2();
			}
		}
		Sleep(200);
	}
	pointer = 0;
}
//***************************************************************************
//this function prompts the user if he or she wants to buy in more money.   *
//Also displays the current user's money.                                   *
//***************************************************************************
void displayWallet()
{
	pause();
	cls();
	int buyin = 0;
	SetBlue();
	cout << wallet1 << endl << endl;
	SetGreen();
	cout << current$;
	SetYellow();
	cout << userMoney << endl << endl;
	SetGreen();
	cout << walletline;
	printWalletBox();
	gotoxy(0, 9);
	e = YorN(1);

	cin.clear();
	clear2();
	if (e == 1)
	{
	cin.ignore();
	//"Enter buy-in amount ($1-10,000): "
	cout << endl << endl;
	promptBuyinz();
		buyin = buyRange(1, 10000);
		userMoney = userMoney + buyin;
		cout << endl << uhave$;
		SetYellow();
		cout << userMoney << endl;
		SetGreen();
	}
	else
	{
		gotoxy(0, 11);
	}
	pause();
}
//******************************************************************************
//shuffles the reels of the slot machine. takes random number (1-3) from vector*
//******************************************************************************
void shuffle1a3()
{
		random_shuffle(OPTIONS1.begin(), OPTIONS1.end());
		a = OPTIONS1[0];
		b = OPTIONS1[1];
		c = OPTIONS1[2];
}
//***************************************************************************
//shuffles the reels of the slot machine and translates number to strings   *
//stores strings into each reel and spot.
//***************************************************************************
void fillslots()
{
	shuffle1a3();
	reelONE[0] = reelOPTIONS[a];
	reelONE[1] = reelOPTIONS[b];
	reelONE[2] = reelOPTIONS[c];
	shuffle1a3();
	reelTHREE[0] = reelOPTIONS[a];
	reelTHREE[1] = reelOPTIONS[b];
	reelTHREE[2] = reelOPTIONS[c];
	shuffle1a3();
	reelTWO[0] = reelOPTIONS[a];
	reelTWO[1] = reelOPTIONS[b];
	reelTWO[2] = reelOPTIONS[c];
}
//***************************************************************************
//the function checks horizontal lines for wins and returns a win or not.   *
//***************************************************************************
bool isHLineWin(int a, int b, int c)
{
	bool linewin = false;
	string sOne, sTwo, sThree;
	sOne = reelONE[a];
	sTwo = reelTWO[b];
	sThree = reelTHREE[c];

	if (sOne == sTwo && sOne == sThree)
	{
		linewin = true;
	}
	else if (sOne == sTwo)
	{
		if (sThree == SHAM)
		{
			linewin = true;
		}
	}
	else if (sOne == sThree)
	{
		if (sTwo == SHAM)
		{
			linewin = true;
		}
	}
	else if (sThree == sTwo)
	{
		if (sOne == SHAM)
		{
			linewin = true;
		}
	}

	return linewin;
}
//***************************************************************************
//converts random numbers into readable words for slot machine.             *
//Updated 12/4/16: graphics added.                                          *
//***************************************************************************
void convertprint(string a)
{
	//"7", "Cherry", "$", "Diamond", "Bolt", "Shamrock"
	if (a == sSeven)
	{
		print7();
	}
	else if (a == sCherry)
	{
		printCherry();
	}
	else if (a == sMoney)
	{
		printMoney();
	}
	else if (a == sDiamond)
	{
		printDiamond();
	}
	else if (a == sBolt)
	{
		printBolt();
	}
	else if (a == sShamrock)
	{
		printShamrock();
	}
}
//***************************************************************************
//this function converts words of reel to pictures by examining each reel   *
//***************************************************************************
void determineprint(int spot)
{
	if (spot == 0)
	{
		convertprint(reelONE[0]);
	}
	else if (spot == 1)
	{
		convertprint(reelTWO[0]);
	}
	else if (spot == 2)
	{
		convertprint(reelTHREE[0]);
	}
	else if (spot == 3)
	{
		convertprint(reelONE[1]);
	}
	else if (spot == 4)
	{
		convertprint(reelTWO[1]);
	}
	else if (spot == 5)
	{
		convertprint(reelTHREE[1]);
	}
	else if (spot == 6)
	{
		convertprint(reelONE[2]);
	}
	else if (spot == 7)
	{
		convertprint(reelTWO[2]);
	}
	else if (spot == 8)
	{
		convertprint(reelTHREE[2]);
	}
}
//***************************************************************************
//the function displays results of the slot machine (graphics)              *
//***************************************************************************
void showSlots()
{
	topleft();
	determineprint(0);
	topmid();
	determineprint(1);
	topright();
	determineprint(2);
	centerleft();
	determineprint(3);
	centermid();
	determineprint(4);
	centerright();
	determineprint(5);
	botleft();
	determineprint(6);
	botmid();
	determineprint(7);
	botright();
	determineprint(8);
}
//***************************************************************************
//this function determinds whether you won or not and then turns a boolean  *
//that corresponds to a specific line to true.                              *
//***************************************************************************
void determinewin()
{
	mline = tline = bline = ldline = rdline = false;
	//line 1
	if (aLines == 1)
	{
		if (isHLineWin(1, 1, 1)) 
		{
			//cout << "Middle line is a win!" << endl << endl;
			mline = true;
		}
		else
		{
			//cout << "No win :(" << endl << endl;
		}
	}
	//line 3
	if (aLines == 3)
	{
		if (isHLineWin(1, 1, 1)) 
		{
			//cout << "Middle line is a win!" << endl << endl;
			mline = true;
		}
		else
		{
			//cout << "No win :(" << endl << endl;
		}

		if (isHLineWin(0, 0, 0))
		{
			//cout << "Top line is a win!" << endl << endl;
			tline = true;
		}
		else
		{
		}
		if (isHLineWin(2, 2, 2))
		{
			//cout << "Bottom line is a win!" << endl << endl;
			bline = true;
		}
		else
		{
		}
	}
	//line 5
	if (aLines == 5)
	{
		if (isHLineWin(1, 1, 1)) 
		{
			//cout << "Middle line is a win!" << endl << endl;
			mline = true;
		}
		else
		{
			//cout << "No win :(" << endl << endl;
		}

		if (isHLineWin(0, 0, 0))
		{
			//cout << "Top line is a win!" << endl << endl;
			tline = true;
		}
		else
		{
		}
		if (isHLineWin(2, 2, 2))
		{
			//cout << "Bottom line is a win!" << endl << endl;
			bline = true;
		}
		else
		{
		}
		if (isHLineWin(0, 1, 2))
		{
			//cout << "Left Diagonal line is a win!" << endl << endl;
			ldline = true;
		}
		else
		{
		}
		if (isHLineWin(2, 1, 0))
		{
			//cout << "Right Diagonal line is a win!" << endl << endl;
			rdline = true;
		}
		else
		{
		}
	}
}
//***************************************************************************
//CONCEPT 3: QUEUES are used. A queue of ints stores wins and losses        *
//The function determinds what money to give or take away based on your bet *                                                                       
//***************************************************************************
void betresults()
{
	if (mline == false && tline == false &&
		bline == false && ldline == false && rdline == false)
	{
		SetRed();
		gotoxy(0, 25);
		cout << showLoss << endl;
		losses.push(1);
		losscount++;
		moneylost += tatebet;
		SetGreen();
	}
	else
	{
		SetBlue();
		gotoxy(0, 25);
		cout << showWin << endl;
		userMoney += aMoneys;
		wins.push(1);
		wincount++;
		SetGreen();
	}

	if (aLines == 1 && mline == true)
	{
		userMoney += aMoneys;
		moneywon += aMoneys;
	}

	if (aLines == 3)
	{
		if (tline == true)
		{
			moneywon += (aMoneys * 2);
			userMoney += (aMoneys * 2);
		}
		if (mline == true)
		{
			moneywon += (aMoneys * 2);
			userMoney += (aMoneys * 2);
		}
		if (bline == true)
		{
			moneywon += (aMoneys * 2);
			userMoney += (aMoneys * 2);
		}
	}

	if (aLines == 5)
	{
		if (tline == true)
		{
			moneywon += (aMoneys * 3);
			userMoney += (aMoneys * 3);
		}
		if (mline == true)
		{
			moneywon += (aMoneys * 3);
			userMoney += (aMoneys * 3);
		}
		if (bline == true)
		{
			moneywon += (aMoneys * 3);
			userMoney += (aMoneys * 3);
		}
		if (ldline == true)
		{
			moneywon += (aMoneys * 3);
			userMoney += (aMoneys * 3);
		}
		if (rdline == true)
		{
			moneywon += (aMoneys * 3);
			userMoney += (aMoneys * 3);
		}
	}
}
//***************************************************************************
//multiply the users bet PER LINE.                                          *
//***************************************************************************
void calcbet()
{
	tatebet = 0;
	
	if (aLines == 3)
	{
		tatebet = aMoneys * 3;
	}

	if (aLines == 5)
	{
		tatebet = aMoneys * 5;
	}
}
//***************************************************************************
//This function subtracts the "total" bet per line from the wallet.         *
//***************************************************************************
void subtractbet()
{
	if (aLines == 1)
	{
		tatebet = aMoneys;
	}
	userMoney -= tatebet;
}
//***************************************************************************
//This function specialises in just returning a boolean value of whether    *
//the user has won or not.                                                  *
//***************************************************************************
void isWin()
{
	determinewin();
	if (mline == false && tline == false &&
		bline == false && ldline == false && rdline == false)
	{
		iswinn = false;
	}
	else if (mline == true || tline == true ||
		bline == true || ldline == true || rdline == true)
	{
		iswinn = true;
	}
}
//***************************************************************************
//This function resets the vector that keeps track of winrate               *
//***************************************************************************
void resetgame()
{
	shufflerate();
	gamecount = 0;
}
//***************************************************************************
//CONCEPT 4: CONDITIONAL OPERATOR is used to make a quick one line operation*
//This function plays the game. It asks the user to bet and how many lines. *
//It then goes to determine your winnings.                                  *
//***************************************************************************
void playGame()
{
	cls();
	clear2();
	fillslots();
	f = 1;
	while (f == 1)
	{
		cout << walletC << dolla;
		SetYellow();
		cout << userMoney << endl << endl << endl;
		SetGreen();
		cout << skeleton << endl;

		//Check if User has any money
		if (userMoney <= 0)
		{
			cout << errorNo$ << endl << endl;
			cout << returnmenu << endl;
			pause();
			return;
		}

		//Get number of lines from user
		//promptLinez();
		//aLines = lineRange();
		aLines = 1;

		cout << endl;
		//"How much MONEY would you like to bet PER LINE? ($1-1000): "
		//Get bet from user.
		promptMoneyz();
		aMoneys = buyRange(1, 2000);

		calcbet();

		//Check bet
		while (aMoneys > userMoney || tatebet > userMoney)
		{
			SetRed();
			if (aMoneys > userMoney)
			{
				cout << endl << nofunds << dolla << userMoney << endPar << endl << endl;
			}
			if (tatebet > userMoney)
			{
				cout << endl << errorNo$2 << dolla << tatebet << endPar << endl << endl;
				cout << returnmenu << endl;
				pause();
				return;
			}
			cout << tryagain;
			SetGreen();
			aMoneys = buyRange(1, 1000);
			calcbet();
		}

		//Take bet out of wallet
		subtractbet();
		pause();
		cls();

		//If vector of winrate has a 0, it's a loss and then keep looping reels until this is true
		if (WINNING1[gamecount] == 0)
		{
			fillslots();
			isWin();
			while (iswinn == true)
			{
				fillslots();
				isWin();
				//cout << "loss" << endl;
			}

		}
		//If vector of winrate has a 1, it's a win and then keep looping reels until this is true
		else if (WINNING1[gamecount] == 1)
		{
			fillslots();
			isWin();
			while (iswinn == false)
			{
				fillslots();
				isWin();
				//cout << "win" << endl;
			}
		}
		//Show wallet, lines, and total bet
		SetGreen();
		cout << slotline << endl;
		cout << right << setw(25) << pipe << cWallet << dolla << left << setw(12);
		SetYellow();
		cout << userMoney;
		SetGreen();
		cout << pipe;
		cout << cLines << setw(14);
		SetYellow();
		cout << aLines;
		SetGreen();
		cout << pipe;
		cout << cTotalBet << dolla << setw(12);
		SetYellow();
		cout << tatebet;
		SetGreen();
		cout << pipe;
		cout << endl;
		cout << slotline << endl;
		cout << left;
		SetGreen();

		//Show slot machine reels
		cout << skeleton << endl;
		showSlots();
		cout << endl << endl;

		//Tell user his or her results
		determinewin();
		betresults();
		cout << current$2 << dolla << left << setw(21);
		SetYellow();
		cout << userMoney << endl << endl;
		SetGreen();
		//Ask user to spin again?
		cout << slotline2;
		printReelBox();
		gotoxy(0, 29);
		f = YorN(2);
		cout << endl;
	
		//Check if the winrate vector needs to be reset.
		gamecount++;
		(gamecount == 10) ? resetgame(): gamecount=gamecount;

		cout << endl;
		pause();
		SetGreen();
		cls();
	}
}

//**************************************************************************
//this function organizes the display of menu options with case switch     *
//**************************************************************************
void menu()
{
		while (program)
		{
			cls();
			displayTitle();
			for (int i = 0; i < 4; i++)
			{
				if (i == pointer)
				{
					SetYellow();
					cout << Menu[i] << endl;
				}
				else
				{
					SetGreen();
					cout << Menu[i] << endl;
				}
			}
			while (true)
			{
				if (GetAsyncKeyState(VK_UP) < 0)
				{
					pointer -= 1;
					if (pointer == -1)
					{
						pointer = 3;
					}
					break;
				}
				else if (GetAsyncKeyState(VK_DOWN) < 0)
				{
					pointer += 1;
					if (pointer == 4)
					{
						pointer = 0;
					}
					break;
				}
				else if (GetAsyncKeyState(VK_RETURN) < 0)
				{
					switch (pointer)
					{
					case 0:

						displayRules();
						break;
					case 1:
						displayWallet();
						break;
					case 2:
						playGame();
						break;
					case 3:
						program = false;
					
						break;
					}
					break;
				}
			}
			Sleep(200);
		}
		pointer = 0;
		cls();	
}

//***************************************************************************
//this function prints and calculates all of the stats and then goes to .txt*
//***************************************************************************
void printstats()
{
	timesplayed = wincount + losscount;
	winpercent = ((wincount / timesplayed) * (100));
	ofs << pipeline << endl;
	ofs << left << pipe << setw(40) << timesPlayed << colon1 << right << setw(42) << timesplayed << pipe << endl;

	ofs << pipeline << endl;
	ofs << left << pipe << setw(40) << timesWon << colon1 << right << setw(42) << wincount << pipe << endl;

	ofs << pipeline << endl;
	ofs << left << pipe << setw(40) << timesLost << colon1 << right << setw(42) << losscount << pipe << endl;

	ofs << pipeline << endl;
	ofs << setprecision(2) << fixed;
	ofs << left << pipe << setw(40) << winPercentage << colon1 << right << setw(41) << winpercent << percent << pipe << endl;

	ofs << pipeline << endl; 
	ofs << left << pipe << setw(40) << moneyWon << colon1 << right << setw(34) << dolla << setw(8) << moneywon << pipe << endl;

	ofs << pipeline << endl;
	ofs << left << pipe << setw(40) << moneyLost << colon1 << right << setw(34) <<dolla << setw(8) << moneylost << pipe << endl;

}

//**************************************************************************
//main function has only functions, closes file, pauses, and returns 0.    *
//**************************************************************************
int main()
{
	SetWindow(100, 40);
	startsc();
	hdr();
	seed();
	fixgame();
	menu();
	printstats();
	ftr();
	eof();
	endsc();
	ofs.close();
	pause();
	return 0;
}
