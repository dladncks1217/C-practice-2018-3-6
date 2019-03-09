#include<stdio.h>

int fibo(int n);
int main()
{
	int a, i;
	int aa[100] = { 0,1 };
	scanf("%d", &a);
	for (i = 2; i <= a; i++)
	{
		aa[i] = aa[i - 2] + aa[i - 1];

	}
	printf("%d\t", aa[a-1]);
	printf("%d", fibo(a));
}
int fibo(int n)
{
	if (n == 1) return 0;
	else if (n == 2) return 1;
	return fibo(n - 1) + fibo(n - 2);
}


