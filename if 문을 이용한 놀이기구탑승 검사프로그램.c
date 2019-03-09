#include<stdio.h>
int main(void)
{

	int age;
	int height;
	int adult;

	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("키를 입력하세요.:");
	scanf("%d", &height);

	if (age >= 6 && height >= 150)
	{
		printf("탑승 하실 수 있습니다.");
	}
	else if (age >= 6 && height < 150)
	{
		printf("보호자가 있으십니까?:\n");
		printf("1번 = 있다. \n 2번 = 없다.");
		scanf("%d", &adult);

		if (adult == 1)
		{
			printf("탑승하실 수 있습니다.");
		}
		else if (adult == 2)
		{
			printf("탑승하실 수 없습니다.");
		}
		else
		{
			printf("잘못 입력하셨습니다.");
		}
	}

	else
	{
		printf("탑승하실 수 없습니다.");
	} 
	return 0;
}