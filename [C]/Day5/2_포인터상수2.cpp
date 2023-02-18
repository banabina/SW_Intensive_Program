// read_array(int* p)
// => const 배열을 받을수 없다.(C++ 에러, C 경고)

// read_array(const int* p)
// => non-const 일반 배열과 배열을 모두 받을수 있다.

// 핵심 : 배열을 읽기만 할것이라면 "const 타입*" 로 받으세요 


//void read_array(int* p, int sz)
void read_array(const int* p, int sz)
{
	// 이 안에서는 인자로 전달된 배열을 읽기만 합니다.
	int n = p[0];
}

int main()
{
	      int x[3] = { 1,2,3 }; // R/W 가능
	const int y[3] = { 1,2,3 }; // Read 만 가능.

	read_array(x, 3);
	read_array(y, 3);
}
