#include <iostream>
#include <string>

// C++ 스타일
class Person
{
private:				
	std::string name;
	int  age = 0;

public:
	void set_age(int a)
	{
		if (a >= 1 && a < 150)
			age = a;
	}
};

// C#, java 등의 대부분의 객체지향 언어는
// 멤버 별로 접근 지정자를 지정합니다.
// 참고) 아래코드는 빌드 안됨
class Person
{
	private std::string name;
	private int  age = 0;

	public void set_age(int a)
	{
		if (a >= 1 && a < 150)
			age = a;
	}
};
