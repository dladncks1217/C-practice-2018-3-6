#include<stdio.h>

int main(void)
{

	int a;
	int b;

	printf("a�� ���� �Է��ϼ���.");
	scanf("%d", &a);

	if ("a<=0")
	{
		b = (a*a*a) - (9 * a) + 2;
		printf("���� %d �Դϴ�.",b);

	}
	else
	{
		b = 7 * a + 2;
		printf("���� %d �Դϴ�.", b);
	}
	return 0;
}