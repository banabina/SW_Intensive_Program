// 21 page ~

// 중요
int main()
{
	int x[3] = { 1,2,3 };

	int n1 = x[0];

	// auto: 우변의 표현식을 보고 좌변 변수의 타입을 컴파일러에게 
	//		  결정해 달라는 지시어.
	auto n2 = x[0];	// 컴파일하면 "int n = x[0]"이 됨

	// auto		 : 우변의 타입을 조사해 달라
	// decltype(): ()안에 있는 타입을 조사해 달라
	decltype(n2) d; // int d; 일반적으로 잘 사용하지 않음. 

	// auto를 정확히 이해하는 것은 아주 어려움
	// => C++ 중급 참고.. 지금은 간단한 개념만
	const int c = 10;
	auto a = c; // int a. 상수를 const가 아닌 것으로 받는 경우가 더 많음
	a = 3;
}
