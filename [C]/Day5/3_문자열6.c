#include <stdio.h>
#include <string.h> // 이 안에 문자열 관련 함수가 
					// 이미 만들어져 있습니다.
int main()
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	int ret = strcmp(s1, s2); // C표준 함수

	if (ret == 0)
		printf("동일 문자열\n");
	else
		printf("다른 문자열\n");

	// 핵심.. 2개 문자열 비교
	// if ( s1 == s2 )          : 틀림. 항상 false
	// if (strcmp(s1, s2) == 0) : ok. strcmp 함수 사용
}