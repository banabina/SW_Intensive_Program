// 1_매크로1.c - 135 page

// 의미 있는 숫자는 직접 사용하지 말고, 심볼을 정의해서 사용하세요
// => 매크로 상수
//#define WIDTH	10
//#define HEIGHT	10

// 아래 처럼 만들면 전처리가 처리하지 않고, 컴파일러가 WIDTH 를 인식
// 에러 발생시 에러메세지에 "WIDTH 포함"
// 단, C++ 은 가능
// C는 배열에 크기에 넣으려면 매크로 사용
const int WIDTH = 10;
const int HEIGHT = 10;

// 지뢰 찾기 게임에서 상태를 관리하는 2차원 배열
int board[WIDTH][HEIGHT] = { 0 };

void draw_board()
{
	for (int y = 0; y < HEIGHT; ++y)
	{
		for (int x = 0; x < WIDTH; ++x)
		{
			// 게임판을 그리는 코드
		}
	}
}

