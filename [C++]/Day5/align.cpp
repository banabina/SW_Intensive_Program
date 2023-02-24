#include <iostream>
#pragma pack(1) // align을 1바이트로. padding 제거
struct Packet
{
	//int cmd;
	char cmd;
	// char padding[3]; // << 컴파일러가 추가
	int data;
};

int main()
{
	std::cout << sizeof(Packet) << std::endl;
	
	Packet pac;
	//int n = pac.data; // 이 순간을 생각해보자
}