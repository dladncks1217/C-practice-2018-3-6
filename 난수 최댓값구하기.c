#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max_1(int i, int j);
int main()
{
	srand((unsigned)time(NULL));
	int x[10] = rand();
	int i;

	for (i = 0; i < 10; i++)
	{
		max_1(x[i], x[i + 1]);



	}
}
int max_1(int i, int j)
{
	if (i > j) return i;
	if (j > i)return j;
	else return j;
}