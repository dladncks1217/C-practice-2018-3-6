#include<stdio.h>
#include<string.h>


int main()
{
	printf("ȸ���˻����α׷��Դϴ�.\n");

	char korean[30];
	int i = 0;
	int a;
	while (1)
	{
		gets(korean);
		a = strlen(korean);

		if (korean[0] >= 'A' && korean[0] <= 'z')
		{
			while (korean[i] != NULL)
			{
				if (i == a)
				{
					printf("ȸ���Դϴ�.");
					i = 0;
					a = 0;
					break;
				}
				else if (i >= a)
				{
					printf("ȸ���Դϴ�.");
					i = 0;
					a = 0;
					break;
				}

				else if (korean[i] == korean[a - 1])
				{
					i++;
					a--;
					continue;
				}
				else if (korean[i] != korean[a - 1])
				{
					printf("ȸ���� �ƴմϴ�.");
					break;
				}
				printf("ȸ���Դϴ�.");
				i = 0;
				a = 0;
				break;
			}
		}


		else
		{

			while (korean[i] != NULL)
			{

				if (i >= a)
				{
					printf("ȸ���Դϴ�.");
					i = 0;
					a = 0;
					break;
				}

				else if ((korean[i] != korean[a - 2]) && (korean[i + 1] != korean[a - 1]))
				{
					printf("ȸ���� �ƴմϴ�.");
					break;
				}
				else if ((korean[i] == korean[a - 2]) && (korean[i + 1] == korean[a - 1]))
				{
					i = i + 2;
					a = a - 2;
					continue;
				}

				printf("ȸ���Դϴ�.");
				i = 0;
				a = 0;
				break;
			}

		}
		
	}
	
}