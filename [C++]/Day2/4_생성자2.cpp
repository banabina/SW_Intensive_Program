// 5_생성자2.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 1. 생성자는 2개 이상 만들 수 있음
	Person(const std::string& n, int a)
	{
		std::cout << "생성자2 호출됨" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		std::cout << "생성자1 호출됨" << std::endl;
		name = "unknown";
		age = 0;
	}
	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	// 일반적인 경우 소멸자는 필요 없음
	// => 필요한 경우만 만들자 (다음 시간 예제)
	~Person() { std::cout << "소멸자" << std::endl; }
};
int main()
{
	// 모든 객체는 생성될 때 생성자가 호출됨
	Person p1("kim", 28);	// 인자 2개인 생성자 호출
	Person p2;				// 인자 없는 생성자 호출

} //<== p2, p1 파괴. 소멸자 호출됨

// 핵심 정리
// 1. 필요한 타입을 먼저 만들자
// 2. private, public을 사용해서 안전하게 사용할 수 있도록 하자
// 3. 생성자로 객체가 초기화 될 수 있게 하자.
