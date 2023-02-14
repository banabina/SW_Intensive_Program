// 함수의 선언, 정의, 호출 - 81 page
#include <stdio.h>
// 함수의 선언: 함수의 모양을 컴파일러에게 미리 알려주는 작업
// 잘못 사용 시 에러를 발행해 달라는 요청

// => 함수 정의가 호출보다 앞에 있으면 선언이 없어도 된다.
// => 함수 정의가 호출보다 아래 있거나, 다른 파일에 있다면
//	  선언을 제공하는 것이 좋다.

// int add(int a, int b); // 함수의 선언
int add(int, int); // 선언 시 변수명은 생략 가능. 하지만 의미 있는 단어라면 표시하는 게 좋음.

int main()
{
	int ret1 = add(1, 2); // 호출
	int ret2 = add(1);
	int ret3 = add();
}

int add(int a, int b)  // 정의 (구현)
{
	return a + b;
}