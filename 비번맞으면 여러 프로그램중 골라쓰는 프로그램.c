#include<stdio.h>

int main(void)
{
	int password;

	printf("비밀번호를 입력해주세요:\n");
	scanf("%d", &password);

	if (password == 1217)
	{

		int number = 1;
		int a, b;
		int sum, substraction, multiplication, division;
		int q, w;
		int r = 0;
		int aa, bb;

		printf("원하시는 프로그램을 말해주세요.\n1. 정수형 계산기 프로그램 \n2. 입력한 수만큼 제곱수로 나타내어주는 프로그램 \n3. 2의 보수로 바꾸어주는 프로그램\n");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			printf("정수를 입력하세요.");
			scanf("%d", &a);
			scanf("%d", &b);

			sum = a + b;
			substraction = a - b;
			multiplication = a * b;
			division = a % b;

			printf("입력하신 정수들의 덧셈값은 %d, 뺄셈값은 %d, 곱셈값은 %d, 나눗셈의 몫 값은 %d 입니다.", sum, substraction, multiplication, division);

			break;
		case 2:
			printf("정수들의 제곱값을 알려주는 프로그램입니다.");
			printf("정수를 입력해주세요.");
			scanf("%d", &q);

			while (r < q)
			{
				w = r * r;
				printf("정수                    제곱수");
				printf("%d                        %d", r, w);
				r++;
				break;
			}
		case 3:
		{
			printf("2의 보수로 바꾸어주는 프로그램입니다.");
			printf("정수를 입력하세요.");
			scanf("%d", &aa);

			bb = (aa ^ 0xffffffff) + 0x00000001;

			printf("입력하신 정수의 보수는 10진수로는 %d,\n 16진수로는 %x 입니다.\n", bb, bb);
			break;
		}
		default:
		{
			printf("잘못 입력하셨습니다.");
		}

		}
	}
	else
	{
		printf("비밀번호를 잘못 입력하셨습니다.");
	}

	return 0;
}