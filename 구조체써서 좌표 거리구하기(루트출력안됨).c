#include <stdio.h>
#include<string.h>
#include<math.h>
struct coordinate
{
	double x;
	double y;
};

int main()
{
	printf("�� ��ǥ�� �Ÿ��� ������ִ� ���α׷��Դϴ�.\n");

	struct coordinate p1, p2, p3;
	double average, average2;

	puts("ù ��° ���� x��ǥ�� �Է����ּ���.");
	scanf("%d", &p1.x);
	puts("ù ��° ���� y��ǥ�� �Է����ּ���.");
	scanf("%d", &p1.y);
	puts("�� ��° ���� x��ǥ�� �Է����ּ���");
	scanf("%d", &p2.x);
	puts("�� ��° ���� y��ǥ�� �Է����ּ���.");
	scanf("%d", &p2.y);


	p3.x = pow((p1.x) - (p2.x), 2);
	p3.y = pow((p1.y) - (p2.y), 2);


	average = sqrt(p3.x + p3.y);
	average2 = fabs(average);

	printf("p1�� p2 ������ �Ÿ��� %lf �Դϴ�.", average);

	return 0;

}