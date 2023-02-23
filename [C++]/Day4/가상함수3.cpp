#include <iostream>

class Window
{
public:
	void event_handler()
	{
		// 발생된 이벤트를 조사해서 약속된 함수 호출
		mouse_click();
	}
	virtual void mouse_click() { std::cout << "window click" << std::endl; }
	void keydown() {}
};

class MainWindow : public Window
{
public:
	void mouse_click() { std::cout << "main window click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_handler();
}