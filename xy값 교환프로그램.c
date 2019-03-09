#include<stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int temp;

	temp = x;
	x = y;
	y = temp;

	printf("%d, %d", x, y);
	return 0;
}