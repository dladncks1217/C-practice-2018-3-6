#include<stdio.h>

	

int main()
{
	int a;
	int b;
	int i;
	printf("수를 입력하세요.");
	scanf("%d", &a);

	for (i = 2; i < a; i++)
	{
		b = a % i;

		if (b == 0)
		{
			printf("소수가 아닙니다.");
			return 0;
		}
		else
		{
			printf("소수입니다.");
			return 0;
		}

	}


}