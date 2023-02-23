#include <cstdio>
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n) { printf("%d", n); }
		void operator<<(double d) { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;
}


int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
	std::cout << "hello";
}


