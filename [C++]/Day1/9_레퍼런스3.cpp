// 1_레퍼런스3. 45 page

int main()
{
	// 포인터와 레퍼런스
	// 유사점: 기본 메모리(변수)를 가리킨다는 것
	// 차이점:

	int n = 0;
	
	int* p1; // 초기화 되지 않거나
	int* p2 = nullptr; // 아무 것도 가리키지 않을 수 있음
	int* p3 = &n;	   // 유효한 주소를 가진 포인터

	// p1, p2는 잘못된 주소를 가짐. * 연산 하면 안됨
	// *p1 = 10; // runtime error
	// *p2 = 10; // runtime error

	int& r1; // 컴파일 에러
			 // 초기화 되지 않은 reference는 만들 수 없음
	int& r2 = n; // ok
}

void f1(int* p)
{
	// 인자로 포인터를 받은 경우, 안전하게 하기위해 꼭 0이 아닌지 확인 후 사용
	if (p != nullptr)
	{
		*p = 10;
	}
}

void f2(int& r)
{
	// r은 거의 대부분 유효
	// 위처럼 if를 사용하지 않고 바로 사용해도 됨
	r = 10;
}