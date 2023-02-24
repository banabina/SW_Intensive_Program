void foo(int weekofday)
{

}

int main()
{
	foo(1); // 0: �Ͽ���, 1: ������
			// �������� ���� ����
	// ��� 1. ��ũ��
#define SUN 0
	foo(SUN);

	// ��� 2. enum ���
	// ���õ� ���� ���� ����� ���� �� ���
	enum {
		sun = 0,
		mon = 1,
		tue, wed, thu, fri, sat
	};

	enum WEEKOFDAY { sun = 0, mon = 1, tue, wed, thu, fri, sat};
	foo(WEEKOFDAY::mon);
}

/*
* C++
* 1. �⺻ ���� ����
* 2. ��ü ���� ������ - ���� �޴�, ����������, ������ ��...
* 3. ������ ������ - template, �ӽð�ü, ���� ��ȯ ��..
* 4. STL ����
* 5. �پ��� ��ũ�� - C++ Idioms, CRTP ��..
* 6. �پ��� ���� �ҽ� �б�, STL ���� ���� �б�(�н�)
*/