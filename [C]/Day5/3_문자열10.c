#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ABCD";	// 문자열이 스택에 있음. stack 은 R/W가능
//	char* s2  = "ABCD";
    const char* s2 = "ABCD";

	// 아래 2줄 생각해 보세요
	s1[0] = 'X';	// ok
	s2[0] = 'X';	// s2가 char* 라면 runtime error
					// s2가 const char* 라면 compile error

	printf("프로 그램 계속 실행\n");
}