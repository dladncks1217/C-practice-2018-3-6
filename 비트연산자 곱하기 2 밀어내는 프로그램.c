#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	printf("������ �Է��ϼ���:");
	scanf("%d", &a);

	printf("2�� ���ϰ� ���� Ƚ���� �Է��ϼ���.");
	scanf("%d", &b);

	c = a << b;

	printf("%d<<%d�� ���� %d �Դϴ�.", a, b, c);

	return 0;
	
}