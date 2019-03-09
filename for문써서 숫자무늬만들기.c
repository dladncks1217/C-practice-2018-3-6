#include<stdio.h>
int main()
{

	int a;
	int i = 1;
	int j = 1;

	printf("정수점여");
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
    }

}