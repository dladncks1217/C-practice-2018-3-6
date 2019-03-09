#include<stdio.h>
int aa(int a);
int main()
{
	int a;
	long x;
	scanf("%d", &a);
	x = aa(a);
	printf("%d", x);
	return 0;
}
int aa(int a)
{
	static int b = 1;
	static int c = 1;
	c = c * b;
	if (b >= a)
	{
		return c;
	}
	b++;
	

	aa(a);
}