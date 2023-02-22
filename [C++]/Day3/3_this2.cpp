#include <iostream>

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
		// 멤버 데이터 이름과 인자의 이름이 동일하면
		// => 에러는 아니고 x 사용 시 인자를 의미 함
		x = x;	// 인자 x = 인자 x. 잘못된 코드
		this->x = x; // 멤버 x = 인자 x
		this->y = y;

		// this 활용 1.
		// => 이름 충돌 시 멤버임을 명확히 표기하기 위해
	}
	// 활용 2. this를 반환하면 멤버 함수를 연속적으로 호출 가능
	Point* foo() { return this; }
	Point& goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo()->set(20, 10);
	p1.goo().goo().goo().goo().goo();

	std::cout << "A" << "B" << "C" << "D";
	//cout.operator<<("A").operator<<("B").operator<<("C")
}
