#include<stdio.h>
#include<string.h>


int main()
{
	printf("�ѱ�ȸ���˻����α׷��Դϴ�.\n");
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
			printf("ȸ���Դϴ�.");
			break;
		}

		else if ((korean[i]!= korean[a - 2]) && (korean[i + 1]!=  korean[a - 1]) )
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
		else if ((korean[i] == korean[a - 2]) && (korean[i + 1] == korean[a - 1]))
		{
			i=i+2;
			a=a-2;
			continue;
		}
	
		printf("ȸ���Դϴ�.");
	}

	return 0;
}