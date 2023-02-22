// 4_인터페이스 - 171(219) page
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

int main()
{
	Car c;
	Camera cam;
	c.setCamera(&cam); // 카메라 설치
	c.start(); // 녹음 시작
}

