#include<stdio.h>

int main(void)
{
	int korean;
	int math;
	int english;
	int science1;
	int science2;
	int average;

	printf("국어 과목의 점수를 입력하시오:");
	scanf("%d", &korean);

	printf("수학 과목의 점수를 입력하시오:");
	scanf("%d", &math);

	printf("영어 과목의 점수를 입력하시오:");
	scanf("%d", &english);

	printf("과학1 과목의 점수를 입력하시오:");
	scanf("%d", &science1);

	printf("과학2 과목의 점수를 입력하시오:");
	scanf("%d", &science2);

	average = (korean + math + english + science1 + science2) / 5;

	printf("당신의 평균은 %d 입니다.", average);

	if 
		(average > 100 || average < 0)
	{
		printf("잘못입력하셨어요"); 
	}
	else
	switch (average)
	{
	case 100:
		printf("사람이 아닌 듯 합니다.너무잘합니다");
		break;
	case 90:
		printf("당신은 겁나잘합니다.");
		break;
	case 80:
		printf("당신은 잘합니다.");
		break;
	case 70:
		printf("당신은 어느정도는 합니다.");
		break;
	case 60:
		printf("당신은 잘 못합니다.");
		break;
	case 50:
		printf("당신은 개못합니다.");
		break;
	default:
		printf("사람이 아닙니다. 포기하세요");

	}

	return 0;


}