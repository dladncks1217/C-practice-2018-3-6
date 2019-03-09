#include<stdio.h>
int main()
{
	int password;
	printf("비밀번호를 입력하세요: ");
	scanf("%d", &password);

	if (password == 1217)
	{
		int a = 0;
		int b;
		int c;
		
		("제곱표 프로그램입니다.\n");
		printf("원하시는 숫자를 입력하시면 그 숫자까지 제곱해 드립니다.\n");
		scanf("%d", &b);

		printf("원래 수                    제곱 수\n");

		while (a <= b)
		{
			c = a * a;

			printf("%d                       %d\n", a, c);

			a++;
		}

		
	}
	else
	{
		printf("비밀번호가 틀렸습니다.");

	}
	return 0;
}