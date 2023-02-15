// 테트리스1.c
#include <stdio.h>

// step1. 필요한 함수 소개: sleep(), xyprintf()
// 1. github.com/codenuri/HDC 에서
//	  xyprintf.c
//	  xyprintf.h
//	  block.h
//	  받아서 현재 폴더에 넣으세요 (DAY3)

// 2. 현재 프로젝트에 3개 파일 추가

// 3. xyprintf.h 헤더 포함해서 사용

#include "xyprintf.h"

int main()
{
	printf("hello\n");

	sleep(1000); // 잠시 멈추는 함수. 인자는 ms

	xyprintf(10, 10, "hello\n");
}