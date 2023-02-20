// 6_함수1.cpp  28 page ~
// C++함수의 특징 1. 디폴트 파라미터

// 주의 사항
// 1. 함수를 선언과 구현으로 분리 시
// => 디폴트 값은 선언에만 표기해야 함

// 2. 마지막 인자부터 차례대로만 지정 가능

void f1(int a = 0, int b, int c = 0) {} // error
void f2(int a, int b, int c = 0) {} // ok

void foo(int a = 0, int b = 0, int c = 0); // 선언에만 표기. 구현에도 적으면 컴파일 에러

int main()
{
	foo(1, 2, 3);
	foo(1, 2);		// 1, 2, 0
	foo(1);			// 1, 0, 0
	foo();			// 0, 0, 0
}

void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/)
{
}
