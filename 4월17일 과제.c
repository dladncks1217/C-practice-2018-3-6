#include<stdio.h>
int main()
{
	int score;



	printf("������ �Է��ϼ���");
	scanf("%d", &score);

	if (score <= 100 && score >= 90)
		printf("A�����Դϴ�.");
	else if (score < 90 && score >= 80)
		printf("B�����Դϴ�.");
	else if (score < 80 && score >= 70)
		printf("C�����Դϴ�.");
	else if (score < 70 && score >= 60)
		printf("D�����Դϴ�.");
	else if (score < 60&&score>=0)
		printf("F�����Դϴ�.");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");



	return 0;
}



#include<stdio.h>
int main()
{
	int a;
	int i = 1;
	int b;

	printf("���� �Է��ϼ���");
	scanf("%d", &a);
	while (i <= a)
	{
		b = i * a;
		printf("\n%d", b);
		i++;
	}
	

	return 0;
}




#include<stdio.h>
int main()
{
	int a;
	int i = 1;
	int b;

	printf("���� �Է��ϼ���");
	scanf("%d", &a);
	for (; i <= a; i++)
	{
		b = a * i;
		printf("%d\n", b);
	}
	

	return 0;
}
