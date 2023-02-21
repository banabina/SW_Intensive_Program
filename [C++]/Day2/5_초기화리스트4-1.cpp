#include <iostream>

int g = 10;

class Test
{
public:
	// 멤버 데이터에 직접 초기값을 넣는 경우
	int value = ++g;		// 절대 이런 코드는 사용하지 말자
							// = 0 같은 코드만 사용. 혼란스러워짐
	Test() {};				// : value(++g)
	Test(int n) : value(n) {}
};

int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 11
}