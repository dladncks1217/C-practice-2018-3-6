#include<stdio.h>

int main(void)
{

	printf("������ ���Ǹ� ���ϴ� ���α׷��Դϴ�.");

	double width;
	double length;
	double height;
	double bulk;

	printf("������ ����, ����, ���̸� �ѹ��� �Է��ϼ���. :\n");
	scanf("%lf, %lf, %lf", &width, &length, &height);

	bulk = width * length * height;

	printf("������ ���Ǵ� %lf �Դϴ�.", bulk);

	return 0;
}