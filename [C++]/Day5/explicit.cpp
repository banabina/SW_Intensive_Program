class Vector
{
public:
	// explicit ������
	// => ���� �ʱ�ȭ�� ��밡���ϰ�
	// => ���� �ʱ�ȭ�� ����
	explicit Vector(int sz) {}
};

// �Լ��� ���ڸ� �����ϴ� ���� "���� �ʱ�ȭ" ��
void f(Vector v) {} // Vector v = 10

int main()
{
	// ���ڰ� int �� ���� �����ڰ� �ִٸ� �Ʒ� ó�� ��� ������
	Vector v1(10);	// ����(direct) �ʱ�ȭ
	Vector v2 = 10; // ����(copy) �ʱ�ȭ

	f(10);
}