#include <iostream>

// CRTP
// => 파생 클래스 만들 때 기반 클래스에게 자신의 이름을 알려주는 기술
// => 가상함수를 사용하지 않고도 가상함수 처럼 동작하게 하는 기술

// 구글에서 "C++ IDioms" 검색 후 1번째 링크 선택
template<typename T>
class Window
{
public:
	void event_handler() // event_handler(Window* this)
	{
//		mouse_click();   // this->mouse_click();
		((T*)this)->mouse_click();
	}

	void mouse_click() { std::cout << "window click" << std::endl; }
	void keydown() {}
};

class MainWindow : public Window<MainWindow>
{
public:
	void mouse_click() { std::cout << "main window click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_handler();
}