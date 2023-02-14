#include <stdio.h>
#include "add.h" 
#include "sub.h"
int main()
{
	int ret1 = add(1, 2);
	int ret2 = sub(1, 2);

	printf("result = %d, %d\n", ret1, ret2);
}

// 1. sub.h		sub.c 만드세요
// 2. 명령 프로프트 안에서 3개의 서스 (main2.c, add.c, sub.c)를 각각 컴파일
// 3. 링킹해서 실행파일 만들고 실행해보기.
