#include<stdio.h>
#include<string.h>


int main()
{
	printf("����ȸ���˻����α׷��Դϴ�.\n");
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
			printf("ȸ���Դϴ�.");
			break;
		}
		else if (i >= a)
		{
			printf("ȸ���Դϴ�.");
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
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
		printf("ȸ���Դϴ�.");
	}

	return 0;
}