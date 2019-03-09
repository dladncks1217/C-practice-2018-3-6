#include<stdio.h>



int main()
{
	int a;
	int b;
	int i;



	for (i = 1; i < 100; i=i+2)
	{
		b = i % 3;
		if (b != 0)
		{
			printf("%d\t",i);
		}
		
	}

	

}