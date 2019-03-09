#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int c;
	printf("정수 입력");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b&&a > c)
	{
		printf("%d가 제일 큼", a);
	}
	else if (b > a&&b > c)
	{
		printf("%d가 제일 큼", b);

	}
	else

		printf("%d가 제일 큼", c);

	return 0;

}