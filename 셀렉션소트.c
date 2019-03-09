#include <stdio.h>

int main()
{
	static int list[10] = { 2,1,5,3,4,9,6,8,7,10 };
	int i, temp, j, k;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{

			if (list[i] < list[j])
			{
				continue;
			}
			else if (list[i] > list[j])
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
			
		}

	}
	for (k = 0; k <= 9; k++)
	{
		printf("%d\t", list[k]);
	}
}
