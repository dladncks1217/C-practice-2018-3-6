#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	srand(time(NULL));
	int num_1 = rand() % 10;
	int num_2 = rand() % 10;
	int num_3 = rand() % 10;


	int guess_time = 0;

	for (;;)
	{
		int strike = 0;
		int ball = 0;
		int a;
		int b;
		int c;

		printf("�� �ڸ� ���ڸ� ���ʴ�� �Է��ϼ���.");
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);

		if (a == num_1) strike++;
		else if (a == num_2)ball++;
		else if (a == num_3)ball++;

		if (b == num_2)strike++;
		else if (b == num_1)ball++;
		else if (b == num_3)ball++;
		
		if (c == num_3)strike++;
		else if (c == num_1)ball++;
		else if (c == num_2)ball++;

		printf("%d�� %d��Ʈ����ũ�Դϴ�.", ball, strike);

		guess_time++;
		if (strike == 3)
		{
			printf("�����Դϴ�! �� %d Ƚ���� �õ����� ���߼̽��ϴ�.", guess_time);
			return 0;
		}
		
	}	

	return 0;
}
