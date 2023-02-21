#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& s, int a)
	{
		// 아래 코드는
		// 1. std::string 타입인 name의 디폴트 생성자 호출 후
		// 2. 대입연산자(name.operator=(s))를 호출하는 코드
		name = s;	// string 타입의 생성자 ? 대입연산자
		age = a;
	}
};

class Person2
{
	std::string name;
	int age;
public:
	// 초기화 리스트를 사용하면
	// => "std::string name(s)"로 초기화 해달라는 의미
	// => 즉, 대입이 아닌 진짜 초기화!
	// C++11부터는 () 대신 {} 사용 가능
	Person2(const std::string& s, int a) : name(s), age(a)
	//Person2(const std::string& s, int a) : name{s}, age{a} 
	{
	}
};

int main()
{
	Person1 p1("kim", 28);
	Person2 p2("lim", 28);
}