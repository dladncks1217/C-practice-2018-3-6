#include<stdio.h>
int main()
{
	int password;
	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf("%d", &password);

	if (password == 1217)
	{
		int a = 0;
		int b;
		int c;
		
		("����ǥ ���α׷��Դϴ�.\n");
		printf("���Ͻô� ���ڸ� �Է��Ͻø� �� ���ڱ��� ������ �帳�ϴ�.\n");
		scanf("%d", &b);

		printf("���� ��                    ���� ��\n");

		while (a <= b)
		{
			c = a * a;

			printf("%d                       %d\n", a, c);

			a++;
		}

		
	}
	else
	{
		printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");

	}
	return 0;
}