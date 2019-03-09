#include<stdio.h>;
#define Squaremeter 3.3058
int main(void)
{

	printf("면적의 단위인 평을 제곱미터로 환산하는 프로그램입니다.");

	double floorspace;
	double a;

	printf("평을 입력하시오.:\n");
	scanf("%lf", &floorspace);

	a = floorspace * Squaremeter;

	printf("%lf", a);

	return 0;
}