#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int hiroo;

	printf("ù ��° ������ �Է��ϼ���.:");
	scanf("%d", &a);

	printf("2��°���� �Է� ��");
	scanf("%d", &b);

	hiroo = a % b;

	if (hiroo == 0)
	{
		printf("b�� a�� ����̴�.");
	}
	else
	{
		printf("����� �ƴϴ�.");
	}
	return 0;
}