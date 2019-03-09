#include<stdio.h>
int main()
{
	int a;
	int b = 1;
	int c;

	for (a = 1; a <= 7; a++)
	{

		for (b = 1;b<=(7-a); b++)
		{
			
			printf(" ");
		}
		for (c = 1; c<=a; c++)
		{
			printf("*");

		}
		printf("\n");
	
	}



}
	

