#include<stdio.h>;
#define Squaremeter 3.3058
int main(void)
{

	printf("������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��Դϴ�.");

	double floorspace;
	double a;

	printf("���� �Է��Ͻÿ�.:\n");
	scanf("%lf", &floorspace);

	a = floorspace * Squaremeter;

	printf("%lf", a);

	return 0;
}