#include <stdio.h>

int main()
{
	int a;
	int b;
	char c;

	
	while (1)
	{
		static int count[5] = { 0 };
		scanf("%d%c%d", &a,&c,&b);
		
		if (c == '+')
		{
			printf("���� %d �Դϴ�\n",a+b);
			count[0]++;
			printf("������ %d�� ����Ǿ����ϴ�.\n", count[0]);
			count[4]++;
		}
		else if (c == '-')
		{
			printf("���� %d �Դϴ�.\n", a - b);
			count[1]++;
			printf("������ %d�� ����Ǿ����ϴ�.\n", count[1]);
			count[4]++;
		}
		else if (c == '*')
		{
			printf("���� %d �Դϴ�.\n", a*b);
			count[2]++;
			printf("������ %d�� ����Ǿ����ϴ�.\n", count[2]);
			count[4]++;
		}
		else if (c == '/')
		{
			printf("�������� ���� %d �Դϴ�.\n",a / b);
			count[3]++;
			printf("�������� %d�� ����Ǿ����ϴ�.\n", count[3]);
			count[4]++;
		}
		else
		{
			printf("�߸��Է��ϼ̽��ϴ�!");
		}
		printf("������� %d�� ����Ǿ����ϴ�.\n", count[4]);

	}



}