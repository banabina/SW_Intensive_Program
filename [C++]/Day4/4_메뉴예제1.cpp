#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 객체 지향 프로그램
// => 필요한 타입을 먼저 만들어라!

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n)
		: title(s), id(n) {}

	std::string get_title() const { return title; }

	// 메뉴 선택시 호출될 함수
	void command()
	{
		std::cout << get_title() << " 메뉴 선택" << std::endl;
		//_getch();
	}
};

int main()
{
	MenuItem m1("김밥", 1);
	MenuItem m2("라면", 2);

	m1.command();
}
