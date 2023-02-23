#include <iostream>

/*
* 강한 결합 (tightly coupling)
*  => 하나의 클래스가 다른 클래스 사용 시 이름을 직접 사용하는 것
*  => 교체 불가능한 경직된 디자인. 확장성 없음
* 
* 약한 결합 (loosely coupling)
* => 하나의 클래스가 다른 클래스 사용 시 규칙을 담은 추상 클래스를 통해서 사용하는 것
* => 교체 가능한 유연한 디자인, 확장성 있음
*/

/*
* 인터페이스 vs 추상 클래스
* 인테페이스: 지켜야 하는 규칙(순수가상함수)만 있는 경우
* 추상 클래스: 지켜야 하는 규칙(순수가상함수)만 있는 경우 + 다른 멤버
* 
* java, C#: abstract, interface라는 키워드 있음
* C++: 별도 키워드 없음. 추상 클래스 문법만 존재
*/

//-------------------------------------------------------------------------------
// 규칙: "모든 카메라는 아래 클래스로 부터 파생되어야 함" 표현하지 말고
//		 "모든 카메라는 아래 인터페이스를 구현해야 함"라고 표현

/*
class ICamera
{
public:
	virtual void take() = 0;
};
*/
// C++에서 인터페이스를 만들 때 class를 사용해도 되지만 struct로 하는 경우도 많음
struct ICamera
{
	virtual void take() = 0;
	virtual ~ICamera() {} // 인터페이스도 결국 기반 클래스. 소멸자에 virtual 꼭 붙이기
};

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