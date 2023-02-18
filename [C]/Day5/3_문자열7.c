#include <stdio.h>	// 표준 입출력 함수들
#include <string.h> // 문자열 함수들

int main()
{
	char s1[]   = "ABC"; // {65, 66, 67, 0}
	char s2[10] = "ABC"; // {65, 66, 67, 0, 0,0,0,0,0,0}

	// 1. sizeof : 메모리 크기
	//    strlen : 문자열 길이
	printf("%zu %zu\n", sizeof(s1), strlen(s1)); // 4, 3
	printf("%zu %zu\n", sizeof(s2), strlen(s2)); // 10, 3

	// 2. 문자열 복사
	char s3[] = "ABC";
	char s4[10];

	// 문자열을 대입하고 싶다.
	//s4 = s3; // error
	strcpy(s4, s3); // s4 <= s3으로 복사. 보안 문제로 사용금지
	
	//strcpy_s(s4, sizeof(s4), s3);

	printf("%s\n", s4);


	// 문자열 결합
	strcat(s4, s3); // s4 뒤에 s3을 붙여라!
	//strcat_s(s4, sizeof(s4) - strlen(s4), s3);

	printf("%s\n", s4);

	//-------------------------
	// 문자열 비교
	char s5[] = "ABC";
	char s6[] = "XBC";

	// 문자열이 같으면 : 0
	// 1번째 인자가 크면(알파벳) : 1
	// 2번째 인자가 크면(알파벳) : -1
	printf("strcmp결과 : %d\n", strcmp(s5, s6));

	// O/X 답하세요
	// 문자열 비교는 if ( s1 == s2 ) 로한다. => X
}
// cppreference.com 
