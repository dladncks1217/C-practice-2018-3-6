1.번문제
#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	printf("2개의 정수를 입력하시오: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	c = a / b;
	d = a % b;

	printf("두 정수의 나눗셈의 몫과 나머지는 각각 %d, %d 입니다.", c, d);

	return 0;
}


2번문제
#include<stdio.h>
int main(void)
{
	double a;
	double b;
	double sum;
	double minus;
	double gopagi;
	double nanoogi;

	printf("실수 2개를 입력하세요.\n");
	printf("a =\n");
	scanf("%lf", &a);
	printf("b = \n");
	scanf("%lf", &b);

	sum = a + b;
	minus = a - b;
	gopagi = a * b;
	nanoogi = a / b;

	printf("더하기 뺴기 곱하기 나누기순으로\n");
	printf("%lf, %lf, %lf, %lf", sum, minus, gopagi, nanoogi);

	return 0;
}

3번문제

#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int c;
	int d;

	printf("숫자 3개를 입력하시오. 최댓값을 구해드립니다.");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	printf("가장 큰 수는 %d 입니다.", d);
	
	return 0;

}


4번문제

