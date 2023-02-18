// 3_문자열4.c
#include <stdio.h>

// 126page
int main()
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	// 1. 두개의 문자열이 동일한지 조사하고 싶다.
	// => 아래 코드는 배열의 주소 비교..
	// => 항상 false 입니다.
	// => 위 2개 배열 메모리 그림 생각하세요. 항상 다른 메모리!
	if (s1 == s2)	
		printf("동일한 문자열\n");
	else 
		printf("다른 문자열\n");
}