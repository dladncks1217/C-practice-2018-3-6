#include <stdio.h>

int main(void)
{
	int password;

	printf("��й�ȣ�� �Է��Ͻÿ�:____:\b\b\b\b");
	scanf("%d,%d,%d,%d", &password);

	if (password == 1234)
	{
		double radius;
		double wide;
		const double PI = 3.14;

		
		printf("���� ���̸� ���ϴ� ���α׷��Դϴ�.");
		scanf("%lf", &radius);

		wide = PI * radius * radius;


		printf("���� ���̴� %lf �Դϴ�.",wide);
	}
	else
	{
		printf("\a ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
	}
	return 0;
}