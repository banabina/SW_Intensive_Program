#include <iostream>

// �ʿ��� Ÿ���� ���� ������
// => �����Ҵ�Ǵ� �޸𸮸� �ڵ����� �����ϴ� Ÿ���� �ʿ�

// ũ�� ������ ������ ���� �Ҵ�� �޸𸮸� �����ϴ� vector��� Ÿ���� ����
class vector
{
private:
	int* ptr;
	int sz;
public:
	vector(int size)
	{
		sz = size;
		ptr = new int[size];
	}
	~vector()
	{
		delete[] ptr;
	}

};

int main()
{
	vector v(10); // 10�� �Ҵ�

	// v.resize(20);	 // 20���� �÷��޶�
}