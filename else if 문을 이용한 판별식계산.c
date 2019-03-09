#include<stdio.h>
int main(void)
{
	float a;
	float b;
	float c;
	float x;
	float D;

	printf("ax^2+bx+c = 의 값에 대해 a, b, c의 값을 대입하시오.\n");
	
	printf("a의 값을 대입하시오.");
	scanf("%f", &a);

	printf("b의 값을 대입하시오.");
	scanf("%f", &b);

	printf("c의 값을 대입하시오.");
	scanf("%f", &c);

	D = b * b - 4 * a*c;

	if (D > 0)
		printf("ax^2 + bx + c = 수식의 몫은 2개 입니다.");
	else if (D == 0)
		printf("ax^2 + bx + c = 수식의 몫은 1개 입니다.");
		
	else if (D < 0)
		printf("ax^2 + bx + c = 수식의 실수 몫은 0개 입니다.");
		

	else
		printf("잘못된 수식입니다.");
		
	
	return 0;

}