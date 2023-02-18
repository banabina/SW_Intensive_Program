#include <stdio.h>
#include <string.h>

int main()
{
	// 사용자에게 이름을 입력 받으려고 합니다
	// => 문자열 배열 ? 문자열 포인터 ?
	// => 입력된 문자열을 담아야 하고, 메모리 쓰기도되어야 합니다.
	char name[32] = { 0 };

	// 프로그램에서 사용할 로고 문자
	// => 변경할 필요 없습니다.
	// => 상수 메모리에 문자열 만들고, 포인터에 주소 담아서 사용
	char* logo = "HYUNDAI MOTORS GROUP";
}