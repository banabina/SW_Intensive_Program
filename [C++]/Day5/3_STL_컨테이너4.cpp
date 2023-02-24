#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	// set: Tree라는 자료구조로 만든 컨테이너
	//		검색이 빠름
	std::set<std::string> s = {"BB", "AA", "CC"}; // 문자열들을 보관. 빠른 검색 시 사용

	// map: 키 값으로 데이터를 보관
	//		다른 언어에서는 dirtionary라 부름
	std::map<std::string, std::string> m = { {"mon", "월요일"}, {"tue", "화요일"} };

	// 아래 처럼 넣어도 됩니다.
	m["wed"] = "수요일";

	std::cout << m["mon"] << std::endl; // 월요일
}





