#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int hiroo;

	printf("첫 번째 정수를 입력하세요.:");
	scanf("%d", &a);

	printf("2번째정수 입력 ㄱ");
	scanf("%d", &b);

	hiroo = a % b;

	if (hiroo == 0)
	{
		printf("b가 a의 약수이다.");
	}
	else
	{
		printf("약수가 아니다.");
	}
	return 0;
}