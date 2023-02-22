// 1. C++17 버전으로 설정
// 2. include 디렉토리 설정. nana 압축 푼 폴더의 include
// 3. 라이브러리 이름 설정에 추가
// => 프로젝트 속성 => 링크 => 입력에서 "nana_v142_Debug_x64.lib" 추가
// 4. 라이브러리가 있는 디렉토리를 설정에 추가 

#include <nana/gui.hpp>
#include <iostream>
void foo()
{
	std::cout << "click" << std::endl;
}

int main()
{
	nana::form fm;

	fm.show();
	
	fm.events().click(foo); // 마우스 클릭하면 foo 함수 호출해달라
	
	nana::exec(); // 종료하지 말고 사용자 이벤트를 처리해 달라
}