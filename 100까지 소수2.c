#include<stdio.h>

int main()
{
	int a, b;
	
	for (a = 1; a < 100; a = a + 2)
	{
		b = a % 3;
		if (b != 0)
		{
			printf("%d\t", a);
		}
	}
}