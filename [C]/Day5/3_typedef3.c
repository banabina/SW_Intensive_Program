// 4_typedef3.c

// typedef 를 해석하는 정확한 방법
// => 변수의 자리에 있는 심볼을 타입으로 해달라.!
/*
int n;		// n 은 변수
double d;
int x[10];
int f(int, int);
*/
//-------------------------------
typedef int n;	
typedef double d;
typedef int x[10];

typedef int f(int, int);

int main()
{
	n a; // int a

	x arr = { 1,2,3 }; // int arr[10]


	f f1; // int f1(int, int) 라는 함수 선언
}