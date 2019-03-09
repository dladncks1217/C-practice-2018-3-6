#include<stdio.h>
int main(void)
{

	int a = 1;
	int b;
	printf("구구단 프로그램입니다.\n");
	printf("원하시는 숫자까지 곱해드립니다. 숫자를 입력하세요.");
	scanf("%d", &b);

	while (a <=50)
	{
		printf("%d*%d = %d\n", a, b, a*b);
		a++;
	}
	return 0;
}
