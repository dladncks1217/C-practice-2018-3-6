#include<stdio.h>
int main(void)
{

	int a = 1;
	int b;
	printf("������ ���α׷��Դϴ�.\n");
	printf("���Ͻô� ���ڱ��� ���ص帳�ϴ�. ���ڸ� �Է��ϼ���.");
	scanf("%d", &b);

	while (a <=50)
	{
		printf("%d*%d = %d\n", a, b, a*b);
		a++;
	}
	return 0;
}
