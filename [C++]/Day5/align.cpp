#include <iostream>
#pragma pack(1) // align�� 1����Ʈ��. padding ����
struct Packet
{
	//int cmd;
	char cmd;
	// char padding[3]; // << �����Ϸ��� �߰�
	int data;
};

int main()
{
	std::cout << sizeof(Packet) << std::endl;
	
	Packet pac;
	//int n = pac.data; // �� ������ �����غ���
}