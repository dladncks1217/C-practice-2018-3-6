#include<stdio.h>

int main(void)
{
	printf("��������� ����ϴ� ���α׷��Դϴ�.\n");
	
	double m;
	double v;
	double E;

	printf("���� m�� �Է��Ͻÿ�.:");
	scanf("%lf", &m);

	printf("�ӵ� v�� �Է��Ͻÿ�.: \n");
	scanf("%lf", &v);

	E = 0.5*m*v*v;

	printf("������� E�� %lf �Դϴ�.\n", E);

	return 0;

}