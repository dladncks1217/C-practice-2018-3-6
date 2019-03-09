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
	printf("두 좌표의 거리를 계산해주는 프로그램입니다.\n");

	struct coordinate p1, p2, p3;
	double average, average2;

	puts("첫 번째 점의 x좌표를 입력해주세요.");
	scanf("%d", &p1.x);
	puts("첫 번째 점의 y좌표를 입력해주세요.");
	scanf("%d", &p1.y);
	puts("두 번째 점의 x좌표를 입력해주세요");
	scanf("%d", &p2.x);
	puts("두 번째 점의 y좌표를 입력해주세요.");
	scanf("%d", &p2.y);


	p3.x = pow((p1.x) - (p2.x), 2);
	p3.y = pow((p1.y) - (p2.y), 2);


	average = sqrt(p3.x + p3.y);
	average2 = fabs(average);

	printf("p1과 p2 사이의 거리는 %lf 입니다.", average);

	return 0;

}