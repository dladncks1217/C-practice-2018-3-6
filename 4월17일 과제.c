#include<stdio.h>
int main()
{
	int score;



	printf("점수를 입력하세요");
	scanf("%d", &score);

	if (score <= 100 && score >= 90)
		printf("A학점입니다.");
	else if (score < 90 && score >= 80)
		printf("B학점입니다.");
	else if (score < 80 && score >= 70)
		printf("C학점입니다.");
	else if (score < 70 && score >= 60)
		printf("D학점입니다.");
	else if (score < 60&&score>=0)
		printf("F학점입니다.");
	else
		printf("잘못 입력하셨습니다.");



	return 0;
}



#include<stdio.h>
int main()
{
	int a;
	int i = 1;
	int b;

	printf("수를 입력하세요");
	scanf("%d", &a);
	while (i <= a)
	{
		b = i * a;
		printf("\n%d", b);
		i++;
	}
	

	return 0;
}




#include<stdio.h>
int main()
{
	int a;
	int i = 1;
	int b;

	printf("수를 입력하세요");
	scanf("%d", &a);
	for (; i <= a; i++)
	{
		b = a * i;
		printf("%d\n", b);
	}
	

	return 0;
}
