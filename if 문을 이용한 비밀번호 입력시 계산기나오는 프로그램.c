#include<stdio.h>

int main(void)
{
	int pw;
	printf("��й�ȣ�� �Է��ϼ��� ____\b\b\b\b");
	scanf("%d", &pw);

	if (pw == 1234)
	{
		printf("�����Դϴ�.\n");

		int a;
		int b;
		int sum;
		int multiplication;
		int division;

		printf("a�� ���� �Է��Ͻÿ�.:");
		scanf("%d", &a);

		printf("b�� ���� �Է��Ͻÿ�.:");
		scanf("%d", &b);

		sum = a + b;
		multiplication = a * b;
		division = a / b;

		printf("a�� b�� ���� %d �Դϴ�.\n", sum);
		printf("a�� b�� ���� %d �Դϴ�.\n", multiplication);
		printf("a�� b�� �������� ���� %d�Դϴ�.:\n", division);
	}

	else 
	{
		printf("\a ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
	}
	return 0;
}