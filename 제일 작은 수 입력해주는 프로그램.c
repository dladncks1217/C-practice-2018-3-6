#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int c;
	printf("���� �Է�");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b&&a > c)
	{
		printf("%d�� ���� ŭ", a);
	}
	else if (b > a&&b > c)
	{
		printf("%d�� ���� ŭ", b);

	}
	else

		printf("%d�� ���� ŭ", c);

	return 0;

}