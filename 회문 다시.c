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
			printf("ȸ�� �ƴ�\n");
			return 0;
		}
	}
	printf("ȸ����");


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
		else puts("ȸ�� x"); return 0;		
	}
	puts("ȸ���Դϴ�.");
}