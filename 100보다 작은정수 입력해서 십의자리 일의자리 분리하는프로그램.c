#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("���� ���� �Է��Ͻÿ�.:");
	scanf("%d", &a);

	

	if (a > 99 || a < 10)
	{
		printf("�߸��Է��ϼ̽��ϴ�.");
	}
	else 
		b = a / 10;

	printf("�Է��Ͻ� ������ �����ڸ��� %d �Դϴ�.\n", b);

	c = a % 10;
	printf("�Է��Ͻ� ������ �����ڸ��� %d �Դϴ�.", c);

	return 0;
}