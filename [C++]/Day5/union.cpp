#include <iostream>

// struct: 구조체
// union: 공용체, 하나의 메모리를 여러 개 이름으로 접근

//struct IPAdress
union IPAddress
{
	int addr;
	char num[4];
};

int main()
{
	std::cout << sizeof(IPAddress) << std::endl;

	IPAddress ip;
	ip.addr = 0x11223344;

	std::cout << ip.num[1] << std::endl; // 44인데 cout이 44를 아스키 코드로 인식해서 문자 출력

	printf("%x", ip.num[0]);
}
