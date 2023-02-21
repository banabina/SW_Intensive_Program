#include <iostream>
#include <string>

// 접근 지정자를 생략하면
// struct: public
// class: private

// C++에서 class와 struct 차이는 오직 한개
// => 접근 지정자 생략 시 디폴트가 어떤 것인가?

// C#, java, swift에서는 class와 struct는 
// => 아주 큰 차이가 있음

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age = 0;		

public:					
	void set_age(int a)
	{
		if (a >= 1 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;
	p.age = 10;
	p.set_age(-10); 

}
