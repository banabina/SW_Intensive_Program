#include <iostream>

// struct: ����ü
// union: ����ü, �ϳ��� �޸𸮸� ���� �� �̸����� ����

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

	std::cout << ip.num[1] << std::endl; // 44�ε� cout�� 44�� �ƽ�Ű �ڵ�� �ν��ؼ� ���� ���

	printf("%x", ip.num[0]);
}