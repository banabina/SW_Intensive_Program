#include <iostream>

class Window
{
public:
	void event_handler() // event_handler(Window* this)
	{
		mouse_click();   // this->mouse_click();
	}
	// 아래 함수가 virtual 이어야 제대로 동작하는 이유를 알아 두자
	virtual void mouse_click() { std::cout << "window click" << std::endl; }
	virtual void keydown() {}
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