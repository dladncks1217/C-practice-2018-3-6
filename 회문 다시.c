#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	int i = 0;
	char  hoi[100];
	gets(hoi);

	length = strlen(hoi) - 1;
	printf("%d\n", length);
	while (hoi[i] != NULL)
	{
		if (hoi[i] == hoi[length])
		{
			length--;
			i++;
			printf("0\n");
			continue;
		}
		else if (hoi[i] != hoi[length])
		{
			printf("회문 아님\n");
			return 0;
		}
	}
	printf("회문임");


}


#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	int i;
	char hoi[100];
	gets(hoi);

	length = strlen(hoi) - 1;
	printf("%d\n", length);
	for (i = 0; i < length; i++)
	{
		if (hoi[i] == hoi[length])
		{
			if ((i == length) || (i > length))  break;
			length--;
			printf("h\n");
			continue;
		}
		else puts("회문 x"); return 0;		
	}
	puts("회문입니다.");
}