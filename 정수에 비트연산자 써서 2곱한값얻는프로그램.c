#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("정수를 입력하세요.:");
	scanf("%d", &a);

	printf("2를 곱하고 싶은 횟수를 입력하세요.:");
	scanf("%d", &b);

	c = a << b;

	printf("%d입니다.", c);


	return 0;
}