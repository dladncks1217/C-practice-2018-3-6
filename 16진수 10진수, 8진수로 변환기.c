#include<stdio.h>

int main(void)
{
	int a = 0xA;

	printf("16������ �Է��Ͻÿ�: \n");
	scanf("%x", &a);

	printf("a �� 8������ %o �Դϴ�.\n",a);
	printf("a �� 10������ %d �Դϴ�.\n", a);
	printf("a �� 16������ %x �Դϴ�.\n", a);
	return 0;
}