#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	printf("2를 곱하고 싶은 횟수를 입력하세요.");
	scanf("%d", &b);

	c = a << b;

	printf("%d<<%d의 값은 %d 입니다.", a, b, c);

	return 0;
	
}