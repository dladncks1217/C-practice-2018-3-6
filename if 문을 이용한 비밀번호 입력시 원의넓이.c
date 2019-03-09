#include <stdio.h>

int main(void)
{
	int password;

	printf("비밀번호를 입력하시오:____:\b\b\b\b");
	scanf("%d,%d,%d,%d", &password);

	if (password == 1234)
	{
		double radius;
		double wide;
		const double PI = 3.14;

		
		printf("원의 넓이를 구하는 프로그램입니다.");
		scanf("%lf", &radius);

		wide = PI * radius * radius;


		printf("원의 넓이는 %lf 입니다.",wide);
	}
	else
	{
		printf("\a 비밀번호가 틀렸습니다.");
	}
	return 0;
}