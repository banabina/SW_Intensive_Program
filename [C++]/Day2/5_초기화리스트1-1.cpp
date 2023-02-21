#include <string>

int main()
{
	// 초기화 vs 대입
	int a = 0; // 초기화: 선언하면서 넣는 것

	int b;
	b = 0; // 대입: 선언 후 (생성 후)에 넣는 것

	// primitive type: 초기화와 대입이 대부분의 경우 동일한 성능

	// user define type: 항상 초기화가 빠름
	// 초기화: 함수 1회 호출 (생성자)
	// 대입: 함수 2회 호출 (생성자 + 대입 연산자)
	std::string s1 = "hello"; // std::string s1("hello")
							  // 즉, 인자가 한개인 생성자 호출

	std::string s2; // 1. 디폴트 생성자 호출
	s2 = "hello";	// 2. s2.operator=("hello") 즉, 대입 연산자 함수 호출

	// 3. 일부 타입은 초기화는 되지만 대입은 안됨
	const int c1 = 10; // ok
	const int c2; // error
	c2 = 10;
}