﻿// 1_레퍼런스4.   100 page

int x = 0;
int foo()  { return x; } // 1. x의 값 0을 반환 => 답!
						 // 2. x의 메모리 정보를 반환

int& goo() { return x; } // 핵심: 참조(reference) 반환
						 // 값이 아닌 메모리 정보를 반환해달라
						 // x의 별명 반환

int main()
{
	int v1 = 10, v2 = 20;
	v1 = 20; // v1이 등호의 왼쪽 (lvalue)
			 // => v1의 메모리 정보(주소)를 꺼내는 기계어 코드 생성

	v2 = v1; // v1이 등호의 오른쪽(rvalue)
			 // => v1의 값을 꺼내는 기계어 코드 생성

//	foo() = 20; // ?
	goo() = 20; // ok. "x = 20"
				// 핵심: 함수가 reference로 반환하면
				// 함수 호출이 등호의 왼쪽에 놓일 수 있음
}
