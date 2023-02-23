#include <cstdio>

// 참고
// 절대 일반 개발자가 "std" 안에 무언가를 만들면 안됨
// 아래 코드는 원리 설명을 위한 것, 절대 사용하지 마세요
namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) 
		{ 
			printf("%d", n);
			return *this;
		}
		ostream& operator<<(double d) 
		{ 
			printf("%lf", d);
			return *this;
		}
		ostream& operator<<(const char* s) 
		{ 
			printf("%s", s);
			return *this;
		}
	};
	ostream cout;
}


int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";
}
