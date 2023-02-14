#include <stdio.h>

   
int main()
{
	// 함수 정의가 함수 호출보다 뒤에 있다면
	// C 언어: 에러 아님. 잘못 사용해도 에러 아님.. 문제가 많다. 버그의 원인
	// C++: 에러! add 함수를 알 수 없다고..
	int ret1 = add(1, 2); 
	int ret2 = add(1);		// error
	int ret3 = add();		// error
}

int add(int n1, int n2)
{
	return n1 + n2;
}
