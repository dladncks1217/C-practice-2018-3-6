#include<stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int temp;
	
	
	temp = x;
	x = y;
	y = temp;

	printf(" x�� %d �Դϴ�.\n", x);
	printf("y�� %d �Դϴ�. \n", y);


	return 0;
}