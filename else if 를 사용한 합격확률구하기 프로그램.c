#include<stdio.h>

int main(void)
{
	printf("oo대학교 수능 합격 예측 프로그램입니다.\n");

	printf("각 과목의 점수를 입력하세요.\n");

	int a;
	int b;
	int c;
	int d;
	int e;
	int average;

	printf("국어과목의 점수를 입력하세요.: ");
	scanf("%d", &a);

	printf("수학과목의 점수를 입력하세요.: ");
	scanf("%d", &b);

	printf("영어과목의 점수를 입력하세요.: ");
	scanf("%d", &c);

	printf("탐구과목1 의 점수를 입력하세요.:");
	scanf("%d", &d);

	printf("탐구과목2 의 점수를 입력하세요.:");
	scanf("%d", &e);

	average = (a + b + c + d + e) / 4;

	printf("%d\n", average);

	if (average >= 76)
		printf("지원자님의 합격확률은 80퍼센트로, 합격 예상합니다.");
	else if (74.5 < average && average <= 76)
		printf("지원자님의 합격확률은 70퍼센트로, 합격 예상합니다.");
	else if (74 <= average && average < 74.5)
		printf("지원자님의 합격확률은 60퍼센트로, 합격 예상합니다.");
	else if (73 <= average && average < 74)
		printf("지원자님의 합격확률은 50퍼센트로, 추가합격 예상합니다.");
	else if(72 <= average && average < 73)
		printf("지원자님의 합격확률은 40퍼센트로, 불합격 예상합니다.");
	else
		printf("지원자님의 합격확률은 30퍼센트 이하로, 불합격 예상합니다.");

	return 0;

}