#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("정수 값을 입력하시오.:");
	scanf("%d", &a);

	

	if (a > 99 || a < 10)
	{
		printf("잘못입력하셨습니다.");
	}
	else 
		b = a / 10;

	printf("입력하신 정수의 십의자리는 %d 입니다.\n", b);

	c = a % 10;
	printf("입력하신 정수의 일의자리는 %d 입니다.", c);

	return 0;
}