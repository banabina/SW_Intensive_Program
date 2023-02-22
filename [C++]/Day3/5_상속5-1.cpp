#include <iostream>
#include <vector>
class People
{
	std::string name;
	int age;
public:
	People(std::string n, int a) : name(n), age(a) {}
};

class Student : public People
{
	int id;
public:
	// 1. 사용자가 생성자 만들지 않으면 컴파일러가 아래 코드 제공
	// Student() : People() {}
	

	// 2. 기반 클래스에 디폴트 생성자가 없으면 사용자가 생성자를 만들어서
	//  기반 클래스의 다른 생성자 호출
	Student(const std::string& n, int a, int newid)
		: People(n, a), id(newid)
	{}
};

// People 에서 파생된 Student 만들기
// 학번(int id) 추가
// main에서 Student 객체 생성해보기
int main()
{
	Student st("kim", 20, 100);
	People p("lim", 10);
}



