#include<stdio.h>
#include<string.h>
enum figures { triangle, rectangular, circle }Fig;
union figure
{
	struct { int base, height; }tri;
	struct { int width, height; }rect;
	struct { int radius; }circ;

}uni;
int main()
{
	
	int a;
	puts("���Ͻô� ������ �Է��ϼ���.0 = �ﰢ��, 1 = ���簢��, 2 = ��");
	scanf("%d", &Fig);

	switch (Fig)
	{
	case 0:
	{
		puts("�ﰢ���� �غ��� ���̸� �Է��ϼ���.");
		scanf("%d", &uni.tri.base);
		a = uni.tri.base;
		puts("�ﰢ���� ���̸� �Է��ϼ���.");
		scanf("%d", &uni.tri.height);
		printf("�ﰢ���� �غ��� %d, �ﰢ���� ���̴� %d, �ﰢ���� ���̴� %d �Դϴ�.", a, uni.tri.height, (a*uni.tri.height) / 2);
		break;
	}
	case 1:
	{
		puts("�簢�� ������ ���̸� �Է��ϼ���.");
		scanf("%d", &uni.rect.width);
		a = uni.rect.width;
		puts("�簢�� ������ ���̸� �Է��ϼ���.");
		scanf("%d", &uni.rect.height);
		printf("�簢���� ���δ� %d, �簢���� ���̴� %d, �簢���� ���̴� %d �Դϴ�.", a, uni.rect.width, (a*uni.rect.width) / 2);
		break;
	}
	case 2:
	{
		puts("���� �������� ���̸� �Է��ϼ���.");
		scanf("%d", &uni.circ.radius);
		printf("���� �������� ���̴� %d �̰�, ���� ���̴� %d �Դϴ�.", uni.circ.radius, (uni.circ.radius * uni.circ.radius));
	}
	}
	return 0;
}