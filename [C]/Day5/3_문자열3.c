// 아래 매크로를 정의하면 VC 에서 보안에 안전하지 않은
// 함수 사용가능합니다
#define _CRT_SECURE_NO_WRANINGS

#include <stdio.h>

int main()
{
	// 1. 아래 2줄 차이점 꼭 알아두세요 ( 122p)
	char   c = 'A'; // 한 문자, 정수 65
	char s[] = "A";	// 문자열, 2개짜리 배열, {65, 0}

	// 2. 사용자에게 문자열 입력 받기

	char name[32] = { 0 }; // 충분한 크기의 배열을 준비하고

	scanf("%s", name);  // 예전 스타일

//	scanf_s("%s", name, 32); // 1. %s 사용
						     // 2. &name 아니고 name
							 // 단어 입력
    printf("sizeof c: %zu\n", sizeof(c));
    printf("sizeof s: %zu\n", sizeof(s));
	printf("%s\n", name);
}