#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void star()
{
	
	printf("*************************************\n");
}
void big_star()
{
	printf("****************************************************************************\n");
}
void start_1()
{
	printf("���� �����Դϴ�.\n ��ǻ�Ϳ� 5�� 3�������� �̷������ ���������� �����Դϴ�. \n\n1�� = ����\n2��=����\n3��=���ڱ�\n");
}
int main()
{
	star;
	printf("���������� �����Դϴ�.");
	srand(time(NULL));
	
	int me;
	int start;
	int my_win = 0;
	int com_win = 0;
	int same = 0;
	int restart;
	aa:
	printf("\n���� ������ ���Ͻø� 1��, ���� ������ ���Ͻø� 2���� �Է����ּ���.");
	scanf("%d", &start);
	big_star();

	if (start == 1)
	{
	ii:
		printf("������ �����մϴ�.\n ����, ���� �� ������ ���� 1,2,3 �Դϴ�.\n\n�̿��� ���� �Է��ϸ� �ǰ�ó���˴ϴ�.");
		int num;
		for (num = 1; num <= 5; num++)
		{
			int com = rand() % 3 + 1;
			printf("����, ����, �� �� �ϳ��� ���ּ���!");
			scanf("%d", &me);

			if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
			{
				printf("����� %d�� �°�, ��ǻ�ʹ� %d�� �½��ϴ�. ����� �¸��Դϴ�.\n", me, com);
				my_win++;
				star();
			}
			else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1))
			{
				printf("����� %d�� �°�, ��ǻ�ʹ� %d�� �½��ϴ�. ����� �й��Դϴ�.\n", me, com);
				com_win++;
				star();
			}
			else if (me == com)
			{
				printf("����� %d�� �°�, ��ǻ�ʹ� %d�� �½��ϴ�. �����ϴ�.\n", me, com);
				same++;
				star();
			}
			else
			{
				printf("�߸� ���̽��ϴ�! �ǰ��Դϴ�!\n");
				com_win++;
				star();
			}
		}
		big_star();
		printf("������ ����Ǿ����ϴ�. ����Դϴ�.");

		if (my_win > com_win)
		{
			printf("����ڴԲ����� �� %d�� �̰��, ��ǻ�ʹ� �� %d�� �̰��, �� %d�� �����ϴ�.\n\n����ڴ��� �¸��Դϴ�.", my_win, com_win, same);
		}
		else if (my_win < com_win)
		{
			printf("����ڴԲ����� �� %d�� �̰��, ��ǻ�ʹ� �� %d�� �̰��, �� %d�� �����ϴ�.\n\n����ڴ��� �й��Դϴ�.", my_win, com_win, same);
		}
		else
		{
			printf("����ڴԲ����� �� %d�� �̰��, ��ǻ�ʹ� �� %d�� �̰��, �� %d�� �����ϴ�.\n\n����ڴ԰� ��ǻ�ʹ� �����ϴ�.\n", my_win, com_win, same);
			printf("������ ���ϽŴٸ� 1��, �����ϰ�����ôٸ� �ƹ� ��ȣ�� �����ּ���.\n");
			scanf("%d", &restart);

			if (restart == 1)
			{
				big_star();
				goto ii;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		big_star();
		start_1();
		big_star();
		goto aa;
	}
	
	return 0;
}