#include <iostream>

// �ٽ�: Ÿ���� ���� �� ���¸� ��Ÿ���� �����Ϳ� ���¸� ������ ������ �����ϴ�
//		 �Լ��� ��� ������!

// C ����ü: �Լ��� ������ �� ����
// C++ ����ü: �Լ��� ������ �� ����

// �� ����ü �ȿ� �Լ��� �ִ°�?
// 1. �Լ��� ������ ������(Rect)�� ���� �ʿ� ����
// 2. �پ��� C++ ������ Ȱ���ؼ� ������ Ÿ���� ���� �� ����

struct Rect
{
	// ��� ������
	int left;
	int right;
	int top;
	int bottom;

	// ��� �Լ�
	int getArea()
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}

};

int main()
{
	Rect rc = { 1, 1, 10, 10 };		// C++ ��Ÿ��
	int n1 = rc.getArea();		// ��ü���� ��Ÿ��
	rc.draw();					// "rc! �׷���!"
}