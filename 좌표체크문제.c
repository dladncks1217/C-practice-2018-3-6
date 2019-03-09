#include<stdio.h>

int equal1(struct point p1, struct point p2);
int equal2(struct point *p1, struct point *p2);

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1 = { 0,0 };
	struct point p2 = { 0,0 };

	struct point *p3 = NULL;
	struct point *p4 = NULL;

	printf("p1의 좌표를 입력 하시오:");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2의 좌표를 입력 하시오");
	scanf("%d %d", &p2.x, &p2.y);

	equal1(p1, p2);
	equal2(&p3, &p4);

	return 0;
}

int equal1(struct point p1, struct point p2)
{
	if (p1.x == p2.x)
	{
		if (p1.y == p2.y)
			printf("1\n");
	}
	else
		return 0;
}

int equal2(struct point *p3, struct point *p4)
{
	if (p3->x == p4->x)
	{
		if (p3->y == p4->y)
			printf("1\n");
	}
	else
		return 0;
}