#include<stdio.h>

	

int main()
{
	int a;
	int b;
	int i;
	printf("���� �Է��ϼ���.");
	scanf("%d", &a);

	for (i = 2; i < a; i++)
	{
		b = a % i;

		if (b == 0)
		{
			printf("�Ҽ��� �ƴմϴ�.");
			return 0;
		}
		else
		{
			printf("�Ҽ��Դϴ�.");
			return 0;
		}

	}


}