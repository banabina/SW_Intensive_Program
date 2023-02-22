// 5_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{
		x = a;			  // this->x = a;
		y = b;			  // this->y = b;
						  // 컴파일러가 위 코드 처럼 변경하는 것
		// 멤버 함수 안에서 this 사용할 수 있음
		// 의미: 현재 함수를 호출할 때 사용한 객체 주소
		std::cout << "set: " << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;
	p1.set(10, 20); // 컴파일러가 아래 처럼 변경함
					// set(&p1, 10, 20);

	p2.set(10, 20); // set(&p2, 10, 20);
}

// 대부분의 객체지향 언어는 원리가 동일함
// => 멤버함수 호출 시, 객체 주소가 인자로 추가되는 것
p.set(10, 20); // set(&p, 10, 20);

// C++, java, C#: 컴파일러가 this 추가
//				  개발자는 this를 추가할 필요 없음 (컴파일러가 자동추가)
void set(int a, int b) => void(this, a, b)

// 파이썬: 개발자가 명시적으로 받아야 함
//		   this라고 하지 않고 self라고 부름
class Point
	def set(self, a, b) :
		self.x = a
		self.y = b