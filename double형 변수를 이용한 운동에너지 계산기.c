#include<stdio.h>

int main(void)
{
	printf("운동에너지를 계산하는 프로그램입니다.\n");
	
	double m;
	double v;
	double E;

	printf("질량 m을 입력하시오.:");
	scanf("%lf", &m);

	printf("속도 v를 입력하시오.: \n");
	scanf("%lf", &v);

	E = 0.5*m*v*v;

	printf("운동에너지 E는 %lf 입니다.\n", E);

	return 0;

}