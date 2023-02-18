#include <stdio.h>

// �ٽ� 1. �Լ� ���ڸ� void*�� ������ ��� Ÿ���� �ּҸ� ���� �� ����

// 2. void*�� *p ������ �ȵ�. �ٸ� Ÿ��(���� ���� Ÿ��)�� �����ͷ� ����

// 3. ������ ũ�⸦ �����ؼ� 1����Ʈ�� ��ȯ�ϴ� ���� ���� ũ�� ��ŭ �ݺ�.

// �Ʒ� �ڵ尡 ��� Ÿ���� swap �ϴ� �Լ�
// => "Generic(�Ϲ�ȭ��, ��� Ÿ�Կ� ���� ����) Swap" �̶� �θ�
void swap(void* p1, void* p2, int sz)
{
	char* p3 = (char*)p1;
	char* p4 = (char*)p2;

	char temp = 0;
	for (int i = 0; i < sz; ++i)
	{
		temp = *(p3 + i);
		*(p3 + i) = *(p4 + i);
		*(p4 + i) = temp;
	}
}

int main()
{
	double x = 2.1;
	double y = 3.4;

	swap(&x, &y, sizeof x);

	printf("%lf\n", x);
	printf("%lf\n", y);

}