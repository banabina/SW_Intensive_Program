#include <stdio.h>

// 같으면 0, 다르면 1
int mystrcmp(const char* p1, const char* p2)
{
	int i = 0;

	while ( p1[i] != 0 && p2[i] != 0 )
	{
		if (p1[i] != p2[i])
			return 1;

		++i;
	}

	return 0; // 같음..
}

int main()
{
	const char s1[] = "ABCD";
	const char s2[] = "ABCD";

	int ret = mystrcmp(s1, s2);

	if (ret == 0)
		printf("동일 문자열\n");
	else 
		printf("다른 문자열\n");
}