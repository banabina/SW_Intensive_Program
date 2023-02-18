#include <stdio.h>

// 매크로 함수의 단점 : 버그가 나올 확율이 높습니다.(아래 예제 참고)
// => 매크로 함수 만들때 꼭 인자를 ()로 묶고..
// => 사용할때 인자로 ++ 등을 사용하지 마세요

//#define SQUARE(x)  x*x
#define SQUARE(x)  ((x) * (x))	// 매크로는 항상 인자에 ()하세요

int main()
{
	int n = 3;

//	int r = SQUARE( n + 1 ); // n + 1 * n + 1

	int r = SQUARE(++n); // ((++n) * (++n))

	printf("%d\n", r); // 결과 예측해 보세요.
}