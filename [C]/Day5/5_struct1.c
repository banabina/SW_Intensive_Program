// 5_struct1.c - 129 page
#include <stdio.h>

// 복소수 2개를 더하는 함수를 만들어 봅시다.
// 복소수 : 실수부(real), 허수부(image)

void add(double ar,  double ai,  double br, double bi,
	     double* sr, double* si)
{
	*sr = ar + br;
	*si = ai + bi;
}

int main()
{
	double sr = 0, si = 0;

	// 1.1 + 1.1i, 2.2 +2.2i 전달
	add(1.1, 1.1, 2.2, 2.2, &sr, &si); 

	printf("%lf, %lf\n", sr, si);
}
// 개발자가 필요한것
// 복소수 => C는 복소수 타입이 없다. double 2개로 표현
// 날짜   => int * 3
// 사람   => char[] 이름, int 나이, int 키..