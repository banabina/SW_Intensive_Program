void foo(int weekofday)
{

}

int main()
{
	foo(1); // 0: 일요일, 1: 월요일
			// 가독성이 좋지 않음
	// 방법 1. 매크로
#define SUN 0
	foo(SUN);

	// 방법 2. enum 사용
	// 관련된 여러 개의 상수를 만들 때 사용
	enum {
		sun = 0,
		mon = 1,
		tue, wed, thu, fri, sat
	};

	enum WEEKOFDAY { sun = 0, mon = 1, tue, wed, thu, fri, sat};
	foo(WEEKOFDAY::mon);
}

/*
* C++
* 1. 기본 문법 공부
* 2. 객체 지향 디자인 - 어제 메뉴, 도형편집기, 다형성 등...
* 3. 복잡한 문법들 - template, 임시객체, 참조 반환 등..
* 4. STL 사용법
* 5. 다양한 테크닉 - C++ Idioms, CRTP 등..
* 6. 다양한 오픈 소스 읽기, STL 내부 구현 읽기(학습)
*/