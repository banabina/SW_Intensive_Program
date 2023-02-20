// 11_nullptr1.cpp    54 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok

	// int* p2 = 10; // error. 10도 정수지만 포인터로 변환 안됨. 0만 가능.
	// C++11 부터는 포인터 초기화는 0대신 nullptr 사용
	int* p3 = nullptr;
	// int n = nullptr; // error

	if (p1 == 0) {} // p1이 정수인지 포인터인지 구별 안됨
	if (p1 == nullptr) {} // 가독성이 좋음
}
