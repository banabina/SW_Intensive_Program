#include <stdio.h>

int main()
{
	int n = 0;

	void* p1 = &n;
	void* p2 = &n;
	// �ٽ� 1. void*�� ���� (==, !=)�� ������
	*p1 = 20; // *p1�� �� �� ��������, �ּҿ� Ÿ�� ����(�޸� ũ��)�� �ʿ�
			  // error. void*�� �ּҸ� �ִ�. Ÿ�� ������ ����
	p1 + 1;	  // error. ���ü�� ũ�⸸ŭ �����ؾ� �ϴµ� Ÿ�� ������ ����

	if (p1 == p2) {} // ok.
}