#include<stdio.h>
int main(void)
{

	int a;
	int b;

	printf("������ �Է��Ͻø� 2�� ������ �ٲ�帳�ϴ�.");
	printf("������ �Է��ϼ���.");
	scanf("%d", &a);

	b = (a ^ 0xffffffff) + 0x00000001;
	printf("�Է��Ͻ� ������ ������ %d �Դϴ�.", b);

	return 0;

}