#include<stdio.h>

int main(void)
{
 
	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int max_value = (a > c ? a : c) > b ? (a > c ? a : c) : b;

	printf("%d", max_value);
	
	return 0;

}