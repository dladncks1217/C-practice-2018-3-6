#include<stdio.h>

int binary(int a[], int x, int y);
int main()
{

	int a;
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("���� �Է��ϼ���.");
	scanf("%d", &a);
	printf("num[%d]�ּҿ� ����Ǿ����ϴ�.", binary(num, 10, a));

	return 0;
}
int binary(int a[], int x, int y)
{
	int low, high, middle;

	low = 0;
	high = x-1;

	while (low <= high)
	{
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (y == a[middle])
		{
			return middle;
		}
		else if (y > a[middle])
		{
			low = middle + 1;
		}
		else
			high = middle - 1;
	}
}