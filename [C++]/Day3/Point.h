#pragma once
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0);

	void set(int a, int b);

	// �ٽ� 1. ��� ��� �Լ� ���� �� const�� ����� ������ ��� ǥ���ؾ���
	void print() const;
};