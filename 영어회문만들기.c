#include<stdio.h>
#include<string.h>


int main()
{
	printf("영어회문검사프로그램입니다.\n");
	char english[30];
	int i = 0;
	int a;
	gets(english);
	a = strlen(english);
	printf("%d\n", a);

	while (english[i] != NULL)
	{
		if (i == a)
		{
			printf("회문입니다.");
			break;
		}
		else if (i >= a)
		{
			printf("회문입니다.");
			break;
		}

		else if (english[i] == english[a-1])
		{
			i++;
			a--;
			continue;
		}
		else if (english[i] != english[a-1])
		{
			printf("회문이 아닙니다.");
			break;
		}
		printf("회문입니다.");
	}

	return 0;
}