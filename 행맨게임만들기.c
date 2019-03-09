#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	char a;
	int life, check, blank;
	char answer[100];
	char user[100];
	gets(answer);
	clrscr();
	printf("게임방법 : 알파벳 하나씩 입력하시고 답을 아시겠으면 \"!\" 사용하면 됨.\n");

	for (blank = 0; answer[blank] == NULL; blank++)
	{
		puts("_ ");
	}

	for (;;)
	{

		getch(a);
		check = strchr(answer, a);
		if (check==0)
		{
			printf("%c", a);
		}

		if (getch(a) == '!')
		{
			gets(user);
			strcmp(answer, user);
			if (strcmp(answer, user) == 0)
			{
				printf("정답입니다! %d 횟수만에 맞추셨습니다!\n", life);
				return 0;
			}
			else
			{
				printf("틀렸습니다!\n");

			}
		}

		if (life > 10)
		{
			printf("정답 맞추기에 실패하셨습니다!");
			return 0;
		}

		life++;
	}

}