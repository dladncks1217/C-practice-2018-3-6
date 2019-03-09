#include<stdio.h>
int num1();
int num2();
int summ(int a, int b);
int main()
{
	int numm;
	int num;

	int sum;
	printf("첫 번째 정수 입력");

	num = num1();
	printf("두 번째 정수 입력");
	numm = num2();
	sum = summ(num,numm);

	printf("두 수의 합은 %d", sum);
}
int num1(void)
{
	int a;
	scanf("%d", &a);
	return a;
}
int num2(void)
{
	int b;
	scanf("%d", &b);
	return b;
}
int summ(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}