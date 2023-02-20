// 4_함수6. 후위 반환 타입

// C/C++ 함수의 전형적인 모양
/*int square(int a)
{
	return a * a;
}*/

// C++11에서 도입된 "후위 반환 타입(suffix return type)" 이라는 문법
// 이 표기법이 논리적으로 맞음: Rust, swift, python, kotlin 등의 언어가 이 표기법
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}
