#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int c;
	int d;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = ((a < b) ? a : b) < c ? ((a < b) ? a : b) : c;

	printf("%d", d);

	return 0;

}