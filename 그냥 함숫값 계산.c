#include<stdio.h>

int main(void)
{

	int a;
	int b;

	printf("a의 값을 입력하세요.");
	scanf("%d", &a);

	if ("a<=0")
	{
		b = (a*a*a) - (9 * a) + 2;
		printf("값은 %d 입니다.",b);

	}
	else
	{
		b = 7 * a + 2;
		printf("값은 %d 입니다.", b);
	}
	return 0;
}