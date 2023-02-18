#include <stdio.h>

// typedef 키워드를 사용하면 기존 타입의 별명을 만들수 있습니다
// 24 page
typedef int       i32;
typedef short     i16;
typedef long long i64;

// 임베디드 분야에서 사용하는 기술
//#define MACHINE_16

#ifdef MACHINE_16
	typedef int       i16;
#else
	typedef short     i16;
#endif

int main()
{
	i32 n = 10; // int n = 10; 과 동일
}