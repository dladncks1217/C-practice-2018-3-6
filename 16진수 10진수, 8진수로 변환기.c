#include<stdio.h>

int main(void)
{
	int a = 0xA;

	printf("16진수를 입력하시오: \n");
	scanf("%x", &a);

	printf("a 는 8진수로 %o 입니다.\n",a);
	printf("a 는 10진수로 %d 입니다.\n", a);
	printf("a 는 16진수로 %x 입니다.\n", a);
	return 0;
}