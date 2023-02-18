#include <stdio.h>

#define WIDTH 10		// WIDTH 를 10으로

#define _DEBUG		// 디버그라는 심볼만 정의

int main()
{
	int xpos = 3; // 프로그램에서 아주 많이 사용하는 변수..

#ifdef _DEBUG
	// 그런데. 계속 결과가 이상해서 xpos 값을 잠시 출력해 보고 싶다.
	printf("xpos = %d\n", xpos);

#endif 

}