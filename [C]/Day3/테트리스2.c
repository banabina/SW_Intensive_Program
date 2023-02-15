// 테트리스2.c
#include <stdio.h>
#include "xyprintf.h"

// Step2. 특수 문자 출력
// 한글 + 한자 키 눌러서 특수 문자 사용
int main()
{
	xyprintf(10, 10, "■\n");
	xyprintf(12, 10, "■\n");
	xyprintf(10, 11, "■\n");
}
