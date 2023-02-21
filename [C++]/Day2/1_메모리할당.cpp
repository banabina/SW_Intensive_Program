// ketword(키워드)
// => 컴파일러가 인식하는 단어
// => int, double, 등의 타입이름
// => if, switch, while, break, continue
// 키워드는 헤더등을 포함하지 않아도 컴파일러 자체가 인식

// pirntf(): 함수 문법을 사용해서 만들어진 함수
// => 사용하려면 <stdio.h> 헤더가 필요

// cppreference.com
// language - keyword가 있음
// 새로운 언어를 학습할 때는 keyword 부터 확인
// 기존에 아는 언어의 keyword와 다른 언어의 keyword 확인

//rust-lang.org


// 2_메모리할당 - 52 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int; // int 타입 한 개 할당
	delete p1;

	int* p2 = new int[10]; // int 10개
	delete[] p2; // 주의! 배열 모양으로 할당한 경우 delete가 아닌 delete[] 사용
}
/*
*				malloc				new
* 정체			함수					키워드(keyword) -> 몸 값 상승
* 인자			정수					타입
* 반환 타입		void* 반환			인자로 전달된 타입*	
*				캐스팅해서 사용		캐스팅 필요 없음
* 결정적 차이	생성자 호출 안됨		생성자 호출됨
*/
