#include<stdio.h>
int main(void)
{
	float a;
	float b;
	float c;
	float x;
	float D;

	printf("ax^2+bx+c = �� ���� ���� a, b, c�� ���� �����Ͻÿ�.\n");
	
	printf("a�� ���� �����Ͻÿ�.");
	scanf("%f", &a);

	printf("b�� ���� �����Ͻÿ�.");
	scanf("%f", &b);

	printf("c�� ���� �����Ͻÿ�.");
	scanf("%f", &c);

	D = b * b - 4 * a*c;

	if (D > 0)
		printf("ax^2 + bx + c = ������ ���� 2�� �Դϴ�.");
	else if (D == 0)
		printf("ax^2 + bx + c = ������ ���� 1�� �Դϴ�.");
		
	else if (D < 0)
		printf("ax^2 + bx + c = ������ �Ǽ� ���� 0�� �Դϴ�.");
		

	else
		printf("�߸��� �����Դϴ�.");
		
	
	return 0;

}