#include <stdio.h>

// 1. if 문으로 가능하지만 조사할 값이 많으면 switch 사용이 간결해 보임
// 2. C 언어는 정수만 가능. 다른 언어는 실수, 문자열 등도 가능
// 3. default
// 4. 의도적인 break 생략 - fall through 라고 부름.
int main()
{
	int n = 1;
	switch (n)
	{
	case 1:
		printf("1\n");
		printf("one\n");
	case 3:
		printf("3\n");
		break;
	default: // 위에서 매치되지 않은 모든 값
		printf("default");
	}
}