#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

int main()
{
	// namespace의 요소에 접근하는 3가지 방법 - 8 페이지

	// 1. 완전한 이름 ( Qualified name )
	Audio::init();
	Video::init();
	// 업무할 때는 완전한 이름을 사용하는 것을 권장!

	// 2. using 선언 (declaration)
	using Audio::init;
	init(); // Audio::init() 호출. Audio 이름 없이 사용 가능

	// 3. using 지시어(directive) 
	using namespace Audio; 
	init(); // Audio 안의 모든 요소를 Audio 없이 사용 가능
}
