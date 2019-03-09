#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void dice(int a);
int main()
{
	int num;
	scanf("%d", &num);
	dice(num);

}
void dice(int a)
{
	int x;
	srand(time(NULL));
	static int c[6] = { 0 };
	static int count;

	for (count = 0; count < a; count++)
	{
		x = 1 + rand() % 6 ;
		if (x == 1)
		{
			c[0]++;
		}
		if (x == 2)
		{
			c[1]++;
		}
		if (x == 3)
		{
			c[2]++;
		}
		if (x == 4)
		{
			c[3]++;
		}
		if (x == 5)
		{
			c[4]++;
		}
		if (x == 6)
		{
			c[5]++;
		}

	}
	printf("%d\t%d\t%d\t%d\t%d\t%d\t", c[0], c[1], c[2], c[3], c[4], c[5]);
}