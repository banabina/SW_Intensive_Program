// 3_변수2.c
// 참고: 파이썬 등 일부 언어는 별도의 선언 없이 사용
//			=> 최초 사용 시 선언으로 취급
//			=> 쉽고, 편리하지만, 안정싱이 떨어짐.
int main()
{
	// 아래 코드는 변수의 선언(declare) 입니다.
	// 메모리 할당 후 이름 부여
	int n1 = 0;

	n1 = 20;

//	n2 = 30; // error 선언되지 않은 이름.
	int a = 0, b = 2;
	double d1 = 3.4, d2 = 0.1;

	// 정수형 변수에 실수를 넣으면 버림 발생
	int c = 3.7; // 3이 들어가게 됨
					// C/C+++은 에러가 아닌 버림이지만 대부분의 다른 언어는 에러

	// 용어 정리
	int v = 10;
	v = 20;
	// v: "변"하는 "수" variable
	// 10, 20: 리터럴(literal), 프로그램에서 사용하는 값
}