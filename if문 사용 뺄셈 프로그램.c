#include<stdio.h>

int main(void)
{
	printf("뺄셈을 해주는 프로그램입니다.(양수만)\n");

	int a;
	int b;
	int c;

	printf("첫 번째 갑을 입력하세요.");
	scanf("%d", &a);

	printf("두 번째 값을 입력하세요.");
	scanf("%d", &b);

	c = a - b;

	if (c < 0)
		printf("양수값이 나오지 않습니다.");

	if (c > 0)
		printf("%d\n", c);

	return 0;


}