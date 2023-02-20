#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 20page - 중요한 변화.!
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// 일관된 초기화 (uniform initialization)
	// 모든 종류의 변수는 {}로 일관되게 초기화 가능
	// C++11 에서 도입
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

	// =이 없어도 됨. C++ 진영의 권장이지만, 위의 스타일 많이 사용 (C 스타일)
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// =이 없는 초기화: 직접(direct) 초기화
	// =이 있는 초기화: 복사(copy) 초기화
	// 차이점: 약간의 차이가 있음 (복사 생성자 배울 때)

	// prevent narrow
	int n5 = 3.4;		// C/C++만 허용
						// 다른 대부분의 언어는 에러.
	int n6 = { 3.4 };	// C++11의 중괄호 초기화는 데이터 손실 발생 시 컴파일 에러.
						// 권장. 더 안전함

}



