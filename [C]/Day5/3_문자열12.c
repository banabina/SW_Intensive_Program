#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "ABCD가나다라";

	printf("%d, %d\n", sizeof(s), strlen(s)); // 13, 12


	// 메모리가 싸졌다.. 
	// 편리하게 모든 문자를 2바이트로 하자.

	// wchar_t : 2바이트 문자 타입
	// L"문자열": 모든 문자를 2바이트로 처리

	wchar_t w[] = L"ABCD가나다라";

	printf("%d, %d\n", sizeof(w), strlen(w)); // 18, 1 
	printf("%d, %d\n", sizeof(w), wcslen(w)); // 18, 1

	// strxxx : SBCS, DBCS 문자열에 대한 문자열 함수
	// wcsxxx : wide charater(2바이트 문자열)에 대한 문자열 함수

	// wide charater 문제점
	// 1. 2byte 에도 전세계모든 문자 포함 못함
	// 2. 대부분 영어 인데, 영어도 2바이트하면 메모리 사용량 2배

	// UTF-8
	// 언어마다 다른 바이트 사용
	// 1바이트 사용 : 0 ~ 127까지 사용
	// 2바이트     : 1번째 바이트가 128 ~ 210
	// 3바이트     : 211 ~ 240
	// 4바이트     : 240 ~ 
}
// unicode.org