#pragma once
class Car
{
	int color;
	int speed;

	static int cnt;

public:
	Car();
	~Car();

	void go();

	// �ٽ� 1. static ��� �Լ��� ����� �������� �и� ��
	//		   ���𿡸� static�� ǥ���ؾ���
	static int get_count();
};