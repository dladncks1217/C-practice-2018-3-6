#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

int checkk(char s[], char[], char ch);
int main()
{
	char solution[100];
	char answer[100];
	gets(solution);
	char ch;

	system("cls");

	while (1)
	{
		printf("���ڿ� �Է��Ͻÿ� :s \n", answer);
		printf("���ڸ� �����Ͻÿ�");
		ch = getchar();
		if (checkk(solution, answer, ch) == 1)
		{
			break;
		}
		return 0;
	}


}
int checkk(char s[], char a[], char ch)
{
	int i;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == ch)
		{
			a[i] = ch;
		}
	}
	if (strcmp(s, a) == 0) return 1;
	else return 0;
}