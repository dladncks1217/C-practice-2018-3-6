#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i = 1;
	int com;
	int me;
	srand(time(NULL));
	com = rand() % 100 + 1;

	printf("***********************************************\n");
	printf("랜덤으로 나오는 수를 맞추는 프로그램입니다.범위는 1 ~ 100 입니다.\n");
	printf("수를 맞춰보세요.: ");
	
	
	ii:
		scanf("%d", &me);
		if (me > com)
		{
			printf("숫자가 너무 큽니다.");
			i++;
			goto ii;
		}
		else if(me<com)
		{
			printf("숫자가 너무 작습니다.");
			
			i++;
			goto ii;
		}
	
		else
		{
			printf("정답입니다! 총 %d번 시도하셨습니다.\n", i);
			return 0;
		}


	

}