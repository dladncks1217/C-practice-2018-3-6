#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i = 1;
	int com;
	int me;
	srand(time(NULL));
	com = rand() % 100 + 1;

	printf("***********************************************\n");
	printf("�������� ������ ���� ���ߴ� ���α׷��Դϴ�.������ 1 ~ 100 �Դϴ�.\n");
	printf("���� ���纸����.: ");
	
	
	ii:
		scanf("%d", &me);
		if (me > com)
		{
			printf("���ڰ� �ʹ� Ů�ϴ�.");
			i++;
			goto ii;
		}
		else if(me<com)
		{
			printf("���ڰ� �ʹ� �۽��ϴ�.");
			
			i++;
			goto ii;
		}
	
		else
		{
			printf("�����Դϴ�! �� %d�� �õ��ϼ̽��ϴ�.\n", i);
			return 0;
		}


	

}