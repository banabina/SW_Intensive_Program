#include <Windows.h>
#include "xyprintf.h"

// Cursor 관련 함수 4개
void ioSetCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ioGetCursorPos(int* px, int* py)
{
	CONSOLE_SCREEN_BUFFER_INFO cur_info;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);

	*px = cur_info.dwCursorPosition.X;
	*py = cur_info.dwCursorPosition.Y;
}

void ioHideCursor()
{
	CONSOLE_CURSOR_INFO cur_info;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
	cur_info.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
}

void ioShowCursor()
{
	CONSOLE_CURSOR_INFO cur_info;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
	cur_info.bVisible = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
}

void ioSleep(int ms)
{
	Sleep(ms);
}

void clrscr()
{
	system("cls");
}