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
	printf("���ӹ�� : ���ĺ� �ϳ��� �Է��Ͻð� ���� �ƽð����� \"!\" ����ϸ� ��.\n");

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
				printf("�����Դϴ�! %d Ƚ������ ���߼̽��ϴ�!\n", life);
				return 0;
			}
			else
			{
				printf("Ʋ�Ƚ��ϴ�!\n");

			}
		}

		if (life > 10)
		{
			printf("���� ���߱⿡ �����ϼ̽��ϴ�!");
			return 0;
		}

		life++;
	}

}