#include<stdio.h>

int main(void)
{
	printf("oo���б� ���� �հ� ���� ���α׷��Դϴ�.\n");

	printf("�� ������ ������ �Է��ϼ���.\n");

	int a;
	int b;
	int c;
	int d;
	int e;
	int average;

	printf("��������� ������ �Է��ϼ���.: ");
	scanf("%d", &a);

	printf("���а����� ������ �Է��ϼ���.: ");
	scanf("%d", &b);

	printf("��������� ������ �Է��ϼ���.: ");
	scanf("%d", &c);

	printf("Ž������1 �� ������ �Է��ϼ���.:");
	scanf("%d", &d);

	printf("Ž������2 �� ������ �Է��ϼ���.:");
	scanf("%d", &e);

	average = (a + b + c + d + e) / 4;

	printf("%d\n", average);

	if (average >= 76)
		printf("�����ڴ��� �հ�Ȯ���� 80�ۼ�Ʈ��, �հ� �����մϴ�.");
	else if (74.5 < average && average <= 76)
		printf("�����ڴ��� �հ�Ȯ���� 70�ۼ�Ʈ��, �հ� �����մϴ�.");
	else if (74 <= average && average < 74.5)
		printf("�����ڴ��� �հ�Ȯ���� 60�ۼ�Ʈ��, �հ� �����մϴ�.");
	else if (73 <= average && average < 74)
		printf("�����ڴ��� �հ�Ȯ���� 50�ۼ�Ʈ��, �߰��հ� �����մϴ�.");
	else if(72 <= average && average < 73)
		printf("�����ڴ��� �հ�Ȯ���� 40�ۼ�Ʈ��, ���հ� �����մϴ�.");
	else
		printf("�����ڴ��� �հ�Ȯ���� 30�ۼ�Ʈ ���Ϸ�, ���հ� �����մϴ�.");

	return 0;

}