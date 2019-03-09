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
	puts("원하시는 도형을 입력하세요.0 = 삼각형, 1 = 직사각형, 2 = 원");
	scanf("%d", &Fig);

	switch (Fig)
	{
	case 0:
	{
		puts("삼각형의 밑변의 길이를 입력하세요.");
		scanf("%d", &uni.tri.base);
		a = uni.tri.base;
		puts("삼각형의 높이를 입력하세요.");
		scanf("%d", &uni.tri.height);
		printf("삼각형의 밑변은 %d, 삼각형의 높이는 %d, 삼각형의 넓이는 %d 입니다.", a, uni.tri.height, (a*uni.tri.height) / 2);
		break;
	}
	case 1:
	{
		puts("사각형 가로의 길이를 입력하세요.");
		scanf("%d", &uni.rect.width);
		a = uni.rect.width;
		puts("사각형 세로의 길이를 입력하세요.");
		scanf("%d", &uni.rect.height);
		printf("사각형의 가로는 %d, 사각형의 높이는 %d, 사각형의 넓이는 %d 입니다.", a, uni.rect.width, (a*uni.rect.width) / 2);
		break;
	}
	case 2:
	{
		puts("원의 반지름의 길이를 입력하세요.");
		scanf("%d", &uni.circ.radius);
		printf("원의 반지름의 길이는 %d 이고, 원의 넓이는 %d 입니다.", uni.circ.radius, (uni.circ.radius * uni.circ.radius));
	}
	}
	return 0;
}