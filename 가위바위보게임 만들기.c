#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	printf("**********************************************************\n");
	printf("****************���� ���� �� �����Դϴ�.******************\n");
	printf("���� ���� => ��ǻ�Ϳ� ���� ���� �� ������ �մϴ�. 5�� 3�������Դϴ�.\n");
	

	int me;
	
	int num;
	srand(time(NULL));

	int me1 = 0;
	int me2 = 0;
	int me3 = 0;
	int com1 = 0;
	int com2 = 0;
	int com3 = 0;



	hi:
	printf("\n\n���� = 1\n���� = 2\n�� = 3\n�ٸ� ���� ���� �ǰ��̴� �������ּ���!\n");
	printf("���Ͻô� ���� �Է��ϼ���: \n");


	for (num = 1; num <= 5; num++)
	{
		scanf("%d", &me);
		int com = rand() % 3 + 1;

		printf("����ڴ��� %d�� �Է��ϼ̰� ��ǻ�ʹ� %d�� �Է��ϼ̽��ϴ�.",me, com);
		if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
		{
			printf("�̰���ϴ�! \n");
			me1++; com3++;
		}
		else if ((me == 1 && com == 1) || (me == 2 && com == 2) || (me == 3 && com == 3))
		{
			printf("�����ϴ�! \n");
			me2++; com2++;
		}
		else if ((me == 3 && com == 1) || (me == 1 && com == 2) || (me == 2 && com == 3))
		{
			printf("�����ϴ�. \n");
			me3++; com1++;
		}
		else
		{
			printf("�ǰ��Դϴ�.");
			me3++; com1++;
		}
	}
	printf("***************���� ���*******************\n");
	printf("���� �¸�Ƚ��: %d\n", me1);
	printf("��ǻ���� �¸�Ƚ��: %d\n", com1);
	printf("��� Ƚ��: %d\n", me2);
	if (me1 >= 3)
	{
		printf("\n�����մϴ�! ����� �¸��Դϴ�!");
	}
	else if ((me2 == 5)||((me2==1)&&(me1==2))||((me2==3)&&(me1==1)))
	{
		printf("�����ϴ�.\n");
		printf("�����Դϴ�.\n");
		goto hi;
	}
	else
	{
		printf("����� �й��Դϴ�.");
	}
	return 0;
}