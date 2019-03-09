#include<stdio.h>

int main(void)
{
	int pw;
	printf("비밀번호를 입력하세요 ____\b\b\b\b");
	scanf("%d", &pw);

	if (pw == 1234)
	{
		printf("계산기입니다.\n");

		int a;
		int b;
		int sum;
		int multiplication;
		int division;

		printf("a의 값을 입력하시오.:");
		scanf("%d", &a);

		printf("b의 값을 입력하시오.:");
		scanf("%d", &b);

		sum = a + b;
		multiplication = a * b;
		division = a / b;

		printf("a와 b의 합은 %d 입니다.\n", sum);
		printf("a와 b의 곱은 %d 입니다.\n", multiplication);
		printf("a와 b의 나눗셈의 몫은 %d입니다.:\n", division);
	}

	else 
	{
		printf("\a 비밀번호가 틀렸습니다.");
	}
	return 0;
}