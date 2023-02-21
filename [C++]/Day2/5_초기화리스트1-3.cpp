// 1. 아래 코드 에러 나오는지 확인
// 2. 에러 나지 않게 변경

class Test
{
	const int c;
public:
	Test(int n) : c(n)
	{
		// c = n; // error. 상수는 대입 안됨
	}
};

int main()
{
	Test t(3);
}