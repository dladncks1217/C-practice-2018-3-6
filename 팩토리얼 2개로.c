#include<stdio.h>



int main()
{
	int a, b = 1;
	scanf("%d", &a);
	for (int i=1; i <= a; i++)
	{
		b = b * i;
	}
	printf("%d", b);
}




#include<stdio.h>
int fact(int a);
int main()
{
	int a;
	scanf("%d", &a);

	printf("%d", fact(a));
}
int fact(int a)
{
	if (a == 0) return 1;
	return a * fact(a - 1);
}