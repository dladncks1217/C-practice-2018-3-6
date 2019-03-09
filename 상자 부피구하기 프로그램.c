#include<stdio.h>

int main(void)
{

	printf("상자의 부피를 구하는 프로그램입니다.");

	double width;
	double length;
	double height;
	double bulk;

	printf("상자의 가로, 세로, 높이를 한번에 입력하세요. :\n");
	scanf("%lf, %lf, %lf", &width, &length, &height);

	bulk = width * length * height;

	printf("상자의 부피는 %lf 입니다.", bulk);

	return 0;
}