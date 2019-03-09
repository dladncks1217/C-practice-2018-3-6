#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	printf("**********************************************************\n");
	printf("****************가위 바위 보 게임입니다.******************\n");
	printf("게임 설명 => 컴퓨터와 가위 바위 보 게임을 합니다. 5판 3선승제입니다.\n");
	

	int me;
	
	int num;
	srand(time(NULL));

	int me1 = 0;
	int me2 = 0;
	int me3 = 0;
	int com1 = 0;
	int com2 = 0;
	int com3 = 0;



	hi:
	printf("\n\n가위 = 1\n바위 = 2\n보 = 3\n다른 수를 내면 실격이니 주의해주세요!\n");
	printf("원하시는 수를 입력하세요: \n");


	for (num = 1; num <= 5; num++)
	{
		scanf("%d", &me);
		int com = rand() % 3 + 1;

		printf("사용자님은 %d를 입력하셨고 컴퓨터는 %d를 입력하셨습니다.",me, com);
		if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
		{
			printf("이겼습니다! \n");
			me1++; com3++;
		}
		else if ((me == 1 && com == 1) || (me == 2 && com == 2) || (me == 3 && com == 3))
		{
			printf("비겼습니다! \n");
			me2++; com2++;
		}
		else if ((me == 3 && com == 1) || (me == 1 && com == 2) || (me == 2 && com == 3))
		{
			printf("졌습니다. \n");
			me3++; com1++;
		}
		else
		{
			printf("실격입니다.");
			me3++; com1++;
		}
	}
	printf("***************게임 결과*******************\n");
	printf("나의 승리횟수: %d\n", me1);
	printf("컴퓨터의 승리횟수: %d\n", com1);
	printf("비긴 횟수: %d\n", me2);
	if (me1 >= 3)
	{
		printf("\n축하합니다! 당신의 승리입니다!");
	}
	else if ((me2 == 5)||((me2==1)&&(me1==2))||((me2==3)&&(me1==1)))
	{
		printf("비겼습니다.\n");
		printf("재대결입니다.\n");
		goto hi;
	}
	else
	{
		printf("당신의 패배입니다.");
	}
	return 0;
}