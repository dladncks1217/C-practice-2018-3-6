#include<stdio.h>
int main(void)
{

	int age;
	int height;
	int adult;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	printf("Ű�� �Է��ϼ���.:");
	scanf("%d", &height);

	if (age >= 6 && height >= 150)
	{
		printf("ž�� �Ͻ� �� �ֽ��ϴ�.");
	}
	else if (age >= 6 && height < 150)
	{
		printf("��ȣ�ڰ� �����ʴϱ�?:\n");
		printf("1�� = �ִ�. \n 2�� = ����.");
		scanf("%d", &adult);

		if (adult == 1)
		{
			printf("ž���Ͻ� �� �ֽ��ϴ�.");
		}
		else if (adult == 2)
		{
			printf("ž���Ͻ� �� �����ϴ�.");
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�.");
		}
	}

	else
	{
		printf("ž���Ͻ� �� �����ϴ�.");
	} 
	return 0;
}