#pragma once
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0);

	void set(int a, int b);

	// 핵심 1. 상수 멤버 함수 만들 때 const는 선언과 구현에 모두 표기해야함
	void print() const;
};