#include<stdio.h>

int main(void)
{
	printf("�� ���� �ϼ��� �˷��ִ� ���α׷��Դϴ�.\n");

	int month;

	printf("���� �Է����ּ���: ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("�Է��Ͻ� ���� 31�ϱ��� �ֽ��ϴ�.");
		break;
	case 2:
		printf("�Է��Ͻ� ���� 28�ϱ��� �ֽ��ϴ�.");
		break;
	default:
		printf("�Է��Ͻ� ���� 30�ϱ��� �ֽ��ϴ�.");

	}

	return 0;

}