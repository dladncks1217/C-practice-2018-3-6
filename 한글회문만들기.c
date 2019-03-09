#include<stdio.h>
#include<string.h>


int main()
{
	printf("한글회문검사프로그램입니다.\n");
	char korean[30];
	int i = 0;
	int a;
	gets(korean);
	a = strlen(korean);
	printf("%d\n", a);

	while (korean[i] != NULL)
	{
		printf("1\n");
		
		if (i >= a)
		{
			printf("회문입니다.");
			break;
		}

		else if ((korean[i]!= korean[a - 2]) && (korean[i + 1]!=  korean[a - 1]) )
		{
			printf("회문이 아닙니다.");
			break;
		}
		else if ((korean[i] == korean[a - 2]) && (korean[i + 1] == korean[a - 1]))
		{
			i=i+2;
			a=a-2;
			continue;
		}
	
		printf("회문입니다.");
	}

	return 0;
}