#include<stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int temp;
	
	
	temp = x;
	x = y;
	y = temp;

	printf(" x는 %d 입니다.\n", x);
	printf("y는 %d 입니다. \n", y);


	return 0;
}