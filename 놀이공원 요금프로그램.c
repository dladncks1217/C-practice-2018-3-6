#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	
	printf("시간을 입력하세요.");
	scanf("%d", &a);

	printf("나이를 입력하세요");
	scanf("%d", &b);

	if (a > 9 && a < 17 )
	{
	
		if (b <= 3 && b <= 12 && b >= 65)
		{
			printf("25000원 입니다.");
		}
		else
		{
			printf("35000원 입니다.");
		}
	}
	if (a >= 17 && a <= 24)
	{
		printf("10000원 입니다.");
	}
}