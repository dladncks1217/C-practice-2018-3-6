1.������
#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	printf("2���� ������ �Է��Ͻÿ�: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	c = a / b;
	d = a % b;

	printf("�� ������ �������� ��� �������� ���� %d, %d �Դϴ�.", c, d);

	return 0;
}


2������
#include<stdio.h>
int main(void)
{
	double a;
	double b;
	double sum;
	double minus;
	double gopagi;
	double nanoogi;

	printf("�Ǽ� 2���� �Է��ϼ���.\n");
	printf("a =\n");
	scanf("%lf", &a);
	printf("b = \n");
	scanf("%lf", &b);

	sum = a + b;
	minus = a - b;
	gopagi = a * b;
	nanoogi = a / b;

	printf("���ϱ� ���� ���ϱ� �����������\n");
	printf("%lf, %lf, %lf, %lf", sum, minus, gopagi, nanoogi);

	return 0;
}

3������

#include<stdio.h>
int main(void)
{

	int a;
	int b;
	int c;
	int d;

	printf("���� 3���� �Է��Ͻÿ�. �ִ��� ���ص帳�ϴ�.");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	printf("���� ū ���� %d �Դϴ�.", d);
	
	return 0;

}


4������

