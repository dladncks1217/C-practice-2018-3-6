#include<stdio.h>

int main(void)
{
	printf("������ ���ִ� ���α׷��Դϴ�.(�����)\n");

	int a;
	int b;
	int c;

	printf("ù ��° ���� �Է��ϼ���.");
	scanf("%d", &a);

	printf("�� ��° ���� �Է��ϼ���.");
	scanf("%d", &b);

	c = a - b;

	if (c < 0)
		printf("������� ������ �ʽ��ϴ�.");

	if (c > 0)
		printf("%d\n", c);

	return 0;


}