#include <Windows.h>

void ioSetCursorPos(int x, int y);
void ioGetCursorPos(int* px, int* py);
void ioHideCursor();
void ioShowCursor();
void ioSleep(int ms);
void clrscr();

#define xyprintf(x, y, ... )  do{ ioSetCursorPos(x,y); printf(__VA_ARGS__ );}while(0);
#define sleep(ms)   ioSleep( (ms))
#define clear()	    clrscr()

