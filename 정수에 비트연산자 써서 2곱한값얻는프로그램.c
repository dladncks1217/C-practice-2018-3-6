#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("������ �Է��ϼ���.:");
	scanf("%d", &a);

	printf("2�� ���ϰ� ���� Ƚ���� �Է��ϼ���.:");
	scanf("%d", &b);

	c = a << b;

	printf("%d�Դϴ�.", c);


	return 0;
}