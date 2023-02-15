#include <stdio.h>
#include <conio.h>
#include "xyprintf.h"

//const int UP = 72;
#define UP 72		// 오래된 방법. 예전 C언어는 const가 없었음
					// 그래서 매크로 라는 기술을 사용

int main()
{
	while (1)
	{
		if (_kbhit() == 1) // 키보드를 누르면 1 안눌렀으면 0
		{
			int n = _getch();
			if (n == 224) // 특수 키라면
			{
				n = _getch();
				switch (n)
				{
				case UP:
					printf("=====> 위 키보드 누름\n");
					break;
				}
			}
			
		}
		

		printf("블록 떨어짐\n");

		sleep(100);
	}

}
