#include <iostream>

// 방법 3.


class Car
{
	int color;
	int speed;
public:
	// int cnt = 0; // 객체 당 한개씩 따로 사용
	static int cnt; // 모든 객체가 공유함

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이터는 클래스 외부에서 반드시 정의 되어야 함
int Car::cnt = 0;

int main()
{
	// 핵심 1. 객체를 한개도 생성하지 않아도
	//		   static 멤버 데이터는 메모리에 생성됨. (외부 정의가 있기 때문)

	// 핵심 2. 객체를 생성하면 static이 아닌 멤버만 객체 메모리에 놓이게 됨
	Car c1;
	Car c2;

	// 핵심 3. static 멤버에 접근하는 2가지 방법
	//         (public인 경우)
	// 1. 클래스이름::cnt <- 권장하는 방법
	// 2. 객체이름.cnt
	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt << std::endl;
	std::cout << c2.cnt << std::endl;

	// 권장: 클래스이름으로 접근
	//		 객체이름은 가독성이 좋지 않음
	//		 cnt가 static인지 아닌지 구별 안됨

	// C#, java, swift 등의 언어는 "클래스 이름"으로만 접근 가능
}
// 결론: static 멤버 데이터는 결국 접근지정자를 사용할 수 있는 전역변수 이다.
// Car만 사용가능한 전역변수!