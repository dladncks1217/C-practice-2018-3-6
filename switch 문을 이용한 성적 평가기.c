#include<stdio.h>

int main(void)
{
	int korean;
	int math;
	int english;
	int science1;
	int science2;
	int average;

	printf("���� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &korean);

	printf("���� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &math);

	printf("���� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &english);

	printf("����1 ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &science1);

	printf("����2 ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &science2);

	average = (korean + math + english + science1 + science2) / 5;

	printf("����� ����� %d �Դϴ�.", average);

	if 
		(average > 100 || average < 0)
	{
		printf("�߸��Է��ϼ̾��"); 
	}
	else
	switch (average)
	{
	case 100:
		printf("����� �ƴ� �� �մϴ�.�ʹ����մϴ�");
		break;
	case 90:
		printf("����� �̳����մϴ�.");
		break;
	case 80:
		printf("����� ���մϴ�.");
		break;
	case 70:
		printf("����� ��������� �մϴ�.");
		break;
	case 60:
		printf("����� �� ���մϴ�.");
		break;
	case 50:
		printf("����� �����մϴ�.");
		break;
	default:
		printf("����� �ƴմϴ�. �����ϼ���");

	}

	return 0;


}