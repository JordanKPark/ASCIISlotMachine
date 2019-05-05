#ifndef OUTCO_H
#define OUTCO_H
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int GetBufferWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	int bufferWidth, result;

	result = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &bufferInfo);

	if (result)
	{
		bufferWidth = bufferInfo.dwSize.X;
	}

	return bufferWidth;
}
void OutputText(string s)
{
	int bufferWidth = GetBufferWidth();
	for (unsigned int i = 1; i <= s.length(); i++)
	{
		char c = s[i - 1];
		int spaceCount = 0;
		if (c == '\n')
		{
			int charNumOnLine = ((i) % bufferWidth);
			spaceCount = bufferWidth - charNumOnLine;
			s.insert((i - 1), (spaceCount), ' ');
			i += (spaceCount);							
			continue;
		}
		if ((i % bufferWidth) == 0)
		{
			if (c != ' ')
			{
				for (int j = (i - 1); j > -1; j--)
				{
					if (s[j] == ' ')
					{
						s.insert(j, spaceCount, ' ');
						break;
					}
					else spaceCount++;
				}
			}
		}
	}
	cout << s << endl;
}

void cls()
{
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;
	GetConsoleScreenBufferInfo(console, &screen);

	FillConsoleOutputCharacterA
		(
			console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
			);
	FillConsoleOutputAttribute
		(
			console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
			screen.dwSize.X * screen.dwSize.Y, topLeft, &written
			);
	SetConsoleCursorPosition(console, topLeft);
}

#endif
