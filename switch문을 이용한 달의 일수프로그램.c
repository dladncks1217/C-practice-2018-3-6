#include<stdio.h>

int main(void)
{
	printf("각 달의 일수를 알려주는 프로그램입니다.\n");

	int month;

	printf("달을 입력해주세요: ");
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
		printf("입력하신 달은 31일까지 있습니다.");
		break;
	case 2:
		printf("입력하신 달은 28일까지 있습니다.");
		break;
	default:
		printf("입력하신 달은 30일까지 있습니다.");

	}

	return 0;

}