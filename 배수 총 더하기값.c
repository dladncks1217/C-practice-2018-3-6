#include<stdio.h>
int main()
{
	int sum = 0;
	int i;
	int a;
	scanf("%d", &a);

	for (i = 0; i < 100; i = i + a)
	{
		sum = sum + i;
	}


	
	
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int sum = 0;
	int a;
	int i = 0;

	scanf("%d", &a);
	do
	{
		sum = sum + i;
		i = i + a;
	} while (i <= 100);
	
	printf("%d", sum);
	return 0;
}
