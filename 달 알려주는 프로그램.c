#include<stdio.h>
int main(void)
{
	int month;

	printf("���� ��Ÿ�����ִ� ���α׷��Դϴ�.");
	scanf("%d", &month);


	switch (month)
	{
	case 1:
		printf("january");
		break;
	case 2:
		printf("Feburary");
		break;
	case 3:
		printf("march");
		break;
	case 4:
		printf("april");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("june");
		break;
	case 7:
		printf("july");
		break;
	case 8:
		printf("august");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("0ctober");
		break;
	case 11:
		printf("november");
		break;
	case 12:
		printf("December");
		break;

	default:
		printf("�߸��Է��ϼ̽��ϴ�.");
	}
}