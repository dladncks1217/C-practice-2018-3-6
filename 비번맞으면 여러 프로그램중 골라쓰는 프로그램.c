#include<stdio.h>

int main(void)
{
	int password;

	printf("��й�ȣ�� �Է����ּ���:\n");
	scanf("%d", &password);

	if (password == 1217)
	{

		int number = 1;
		int a, b;
		int sum, substraction, multiplication, division;
		int q, w;
		int r = 0;
		int aa, bb;

		printf("���Ͻô� ���α׷��� �����ּ���.\n1. ������ ���� ���α׷� \n2. �Է��� ����ŭ �������� ��Ÿ�����ִ� ���α׷� \n3. 2�� ������ �ٲپ��ִ� ���α׷�\n");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			printf("������ �Է��ϼ���.");
			scanf("%d", &a);
			scanf("%d", &b);

			sum = a + b;
			substraction = a - b;
			multiplication = a * b;
			division = a % b;

			printf("�Է��Ͻ� �������� �������� %d, �������� %d, �������� %d, �������� �� ���� %d �Դϴ�.", sum, substraction, multiplication, division);

			break;
		case 2:
			printf("�������� �������� �˷��ִ� ���α׷��Դϴ�.");
			printf("������ �Է����ּ���.");
			scanf("%d", &q);

			while (r < q)
			{
				w = r * r;
				printf("����                    ������");
				printf("%d                        %d", r, w);
				r++;
				break;
			}
		case 3:
		{
			printf("2�� ������ �ٲپ��ִ� ���α׷��Դϴ�.");
			printf("������ �Է��ϼ���.");
			scanf("%d", &aa);

			bb = (aa ^ 0xffffffff) + 0x00000001;

			printf("�Է��Ͻ� ������ ������ 10�����δ� %d,\n 16�����δ� %x �Դϴ�.\n", bb, bb);
			break;
		}
		default:
		{
			printf("�߸� �Է��ϼ̽��ϴ�.");
		}

		}
	}
	else
	{
		printf("��й�ȣ�� �߸� �Է��ϼ̽��ϴ�.");
	}

	return 0;
}