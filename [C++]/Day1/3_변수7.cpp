#include <iostream>
#include <string>

int main()
{
	// C언어의 문자열
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	// if (s1 == s2) {} // 주소 비교. 항상 false
	if (strcmp(s1, s2) == 0) {} // ok

	// C++의 문자열
	std::string s3 = "ABCD";
	std::string s4 = "ABCD";
	std::string s5 = s3 + s4; // 덧셈 가능

	if (s3 == s4) {} // ok
	s3 = s4;

	std::cout << s5 << std::endl;

}