#include <stdio.h>

int main()
{
	int a;
	int b;
	char c;

	
	while (1)
	{
		static int count[5] = { 0 };
		scanf("%d%c%d", &a,&c,&b);
		
		if (c == '+')
		{
			printf("합은 %d 입니다\n",a+b);
			count[0]++;
			printf("덧셈은 %d번 실행되었습니다.\n", count[0]);
			count[4]++;
		}
		else if (c == '-')
		{
			printf("차는 %d 입니다.\n", a - b);
			count[1]++;
			printf("뺄셈은 %d번 실행되었습니다.\n", count[1]);
			count[4]++;
		}
		else if (c == '*')
		{
			printf("곱은 %d 입니다.\n", a*b);
			count[2]++;
			printf("곱셈은 %d번 실행되었습니다.\n", count[2]);
			count[4]++;
		}
		else if (c == '/')
		{
			printf("나눗셈의 몫은 %d 입니다.\n",a / b);
			count[3]++;
			printf("나눗셈은 %d번 실행되었습니다.\n", count[3]);
			count[4]++;
		}
		else
		{
			printf("잘못입력하셨습니다!");
		}
		printf("현재까지 %d번 실행되었습니다.\n", count[4]);

	}



}