/* 3_변수3.c
* 핵심: 변수 값 출력 - 17 page
*/
#include <stdio.h>

int main()
{
	int n1 = 10;
	double d = 3.4;
	// printf(n1); // error. printf는 문자열을 전달해야 한다.
	printf("n1\n"); // ok. 그런데 "n1"을 출력
	printf("%d\n", n1);
	printf("n1 = %4d, d = %lf\n", n1, d);

	// 출력 시 갯수를 꼭 맞춰야 한다.
	// 다르면, 에러는 아니지만 잘못된 결과가 나온다.
	printf("%d %d", n1);

	return 0;
}
