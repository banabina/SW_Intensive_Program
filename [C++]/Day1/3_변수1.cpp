// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 18 page ~

struct Point 
{
	// 구조체 멤버 초기화 가능
	int x = 0;	// C에러
	int y = 0;	// C++ 11 부터
};

int main()
{
	int n1 = 0b101;		// C++ 11부터 2진수 리터럴 사용 가능
	int n2 = 1'000'000; // C++11 부터 자릿수 표기 가능
						// 컴파일러가 '를 무시하는 것
						// 가독성을 위한 도구
	struct Point p1;	// C 스타일
	Point p2;			// C++에서는 struct 필요 없음.
}
