#include <stdio.h>

// 파워포인트 같은 프로그램을 생각해 봅시다.

// 1. 필요한 타입(도형)을 먼저 설계합니다.
struct _Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
typedef struct _Rect Rect;

//-----------------------
// 2. 이제 필요한 모든 타입(도형)을 설계했으므로
//    필요한 함수를 설계 합니다.
//void draw_rect( Rect r )	// 구조체를 값으로 받으면 메모리사용량증가
void draw_rect(const Rect* r)		// 그래서 포인터로!
{
//	r->left = 100;
	printf("%d, %d, %d, %d\n", r->left, r->top,
						   	   r->right, r->bottom);

	printf("인자값을 사용해서 draw rect\n");
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };

	draw_rect(&rc);
}