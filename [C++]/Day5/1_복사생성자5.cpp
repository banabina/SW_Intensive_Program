#include <vector>
#include <iostream>

// 깊은 복사를 사용한 swap
// => 느림
template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

// move를 사용한 swap: 아주 빠르게 동작
template<typename T>
void swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}
// 결론: 어떤 타입이 "동적 메모리"를 사용할 때 (vector 등)
// => 일반적으로는 깊은 복사가 유용
// => 그런데, swap 등의 알고리즘 작성시에는 move가 빠름

/*
// C++
vector v2 = v1; // 깊은 복사
vector v2 = std::move(v1) // 자원 이동

// Rust
vector v2 = v1; // 자원이동
vector v2 = v1.clone() // 깊은 복사
*/

// 아래 2줄은 완전히 합법. 아무일도 하지 않음
// free(0);
// delete 0;

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,10 };
	swap(v1, v2);

}