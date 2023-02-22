// 3_OOP1 - 57page
#include <iostream>

// ��ü���� ���α׷��� �ٽ� 1.
// => ���α׷����� �ʿ��� Ÿ���� ���� ��������!

// ���α׷����� �簢���� ���� �ٷ�� �ȴٸ�
// "�簢��" �̶�� Ÿ���� ���� ��������
struct Rect
{
	int left;
	int right;
	int top;
	int bottom;
};

// �簢���� ������ ���ϴ� �Լ�
int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

// �簢���� �׸��� �Լ�
void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };
	int n1 = getRectArea(rc);
	drawRect(rc);
}