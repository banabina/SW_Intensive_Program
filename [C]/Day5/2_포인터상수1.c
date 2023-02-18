// 160 page
int main()
{
	const int c = 10;

	// 1. 상수는 값을 변경할수 없습니다.
//	c = 20; // error

	// 2. 아래 코드 생각해 보세요

	// 핵심 1. 상수에 주소를 상수가 아닌 것을 가리키는 포인터에
	//        담을수 없습니다.
	//		  C언어 : 경고, C++ 언어 : 에러
//	int* p = &c;
//	*p = 20;

	// 핵심 2.
//	      int* p1 = &c; // error(경고)
	const int* p2 = &c; // ok
//	*p2 = 20; // error

	// 핵심 3.
	int n = 10;

	      int* p3 = &n; // ok
	const int* p4 = &n; // ok
						// 원래 메모리는 R/W 인데
						// p4를 통해서는 Read 만 하겠다는것

	// int*       에는 non-const 주소만 담을수 있다
	// const int* 에는 non-const, const 주소를 모두 담는다
}