#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	
	printf("�ð��� �Է��ϼ���.");
	scanf("%d", &a);

	printf("���̸� �Է��ϼ���");
	scanf("%d", &b);

	if (a > 9 && a < 17 )
	{
	
		if (b <= 3 && b <= 12 && b >= 65)
		{
			printf("25000�� �Դϴ�.");
		}
		else
		{
			printf("35000�� �Դϴ�.");
		}
	}
	if (a >= 17 && a <= 24)
	{
		printf("10000�� �Դϴ�.");
	}
}