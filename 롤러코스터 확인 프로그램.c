#include<stdio.h>
int main(void)
{
	int a;
	int b;

	printf("키를 입력하세요");
	scanf("%d", &a);
	printf("나이를 입력하세요");
	scanf("%d", &b);

	if (a > 145 && b > 10)
	{
		printf("타도 좋습니다.");

	}
	else
		printf("죄송합니다.");


	return 0;
}