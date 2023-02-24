#include <string>
#include <vector>

void f1(std::string s) {}
void f2(std::vector<int> v) {}

int main()
{
	f2(10); // 안되는게 좋음

	std::vector<int> v1(10); // ok
	std::vector<int> v2 = 10; // error
								// vector(int) 생성자는 explicit
	f1("hello"); // 되는 게 좋음
	std::string s1("hello");	// ok
	std::string s2 = "hello";	// ok
			// 생성자가 explicit 아님 
			// string(const char*) 생성자 호출
}