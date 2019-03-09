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
	printf("게임 설명입니다.\n 컴퓨터와 5판 3선승제로 이루어지는 가위바위보 게임입니다. \n\n1번 = 가위\n2번=바위\n3번=보자기\n");
}
int main()
{
	star;
	printf("가위바위보 게임입니다.");
	srand(time(NULL));
	
	int me;
	int start;
	int my_win = 0;
	int com_win = 0;
	int same = 0;
	int restart;
	aa:
	printf("\n게임 시작을 원하시면 1번, 게임 설명을 원하시면 2번을 입력해주세요.");
	scanf("%d", &start);
	big_star();

	if (start == 1)
	{
	ii:
		printf("게임을 시작합니다.\n 가위, 바위 보 순으로 각각 1,2,3 입니다.\n\n이외의 수를 입력하면 실격처리됩니다.");
		int num;
		for (num = 1; num <= 5; num++)
		{
			int com = rand() % 3 + 1;
			printf("가위, 바위, 보 중 하나를 내주세요!");
			scanf("%d", &me);

			if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
			{
				printf("당신은 %d를 냈고, 컴퓨터는 %d를 냈습니다. 당신의 승리입니다.\n", me, com);
				my_win++;
				star();
			}
			else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1))
			{
				printf("당신은 %d를 냈고, 컴퓨터는 %d를 냈습니다. 당신의 패배입니다.\n", me, com);
				com_win++;
				star();
			}
			else if (me == com)
			{
				printf("당신은 %d를 냈고, 컴퓨터는 %d를 냈습니다. 비겼습니다.\n", me, com);
				same++;
				star();
			}
			else
			{
				printf("잘못 내셨습니다! 실격입니다!\n");
				com_win++;
				star();
			}
		}
		big_star();
		printf("게임이 종료되었습니다. 결산입니다.");

		if (my_win > com_win)
		{
			printf("사용자님께서는 총 %d번 이겼고, 컴퓨터는 총 %d번 이겼고, 총 %d번 비겼습니다.\n\n사용자님의 승리입니다.", my_win, com_win, same);
		}
		else if (my_win < com_win)
		{
			printf("사용자님께서는 총 %d번 이겼고, 컴퓨터는 총 %d번 이겼고, 총 %d번 비겼습니다.\n\n사용자님의 패배입니다.", my_win, com_win, same);
		}
		else
		{
			printf("사용자님께서는 총 %d번 이겼고, 컴퓨터는 총 %d번 이겼고, 총 %d번 비겼습니다.\n\n사용자님과 컴퓨터는 비겼습니다.\n", my_win, com_win, same);
			printf("재대결을 원하신다면 1번, 종료하고싶으시다면 아무 번호나 눌러주세요.\n");
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