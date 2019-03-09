
#include<stdio.h>

int aa(int aa[],int x,int y);
int main()
{
	int hi[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a;
	scanf("%d", &a);

}
int aa(int aa[], int x, int y)
{
	int middle, high,low;
	low = 0;
	high = y - 1;
	
	while (high <= low)
	{
		middle = x + y / 2;
		printf("%d\t%d\n", high, low);
		if (y == aa[middle])
		{

		}
	}
}