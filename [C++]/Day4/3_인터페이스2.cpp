#include <iostream>

// HW를 생각해보자
// PC와 USB
// => 산업 규칙을 만들고 규칙에 따라 PC와 USB를 제작
// => 규칙을 지킨 모든 USB는 기존 PC의 수정 없이 연결 가능

// 카메라와 카메라 사용자 사이의 규칙을 먼저 설계하자

// 규칙: 모든 카메라는 아래 클래스로 부터 파생되어야 함
class ICamera
{
public:
	virtual void take() = 0;
};

// 실제 카메라는 없지만 "규칙"이 있음
// 규칙대로만 사용하면 됨

class People
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);

	UHDCamera uc;
	p.use_camera(&uc);
}