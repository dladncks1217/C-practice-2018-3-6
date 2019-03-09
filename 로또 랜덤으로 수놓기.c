#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	printf("로또 랜덤 프로그램입니다.");
	int a = 1;
	srand((unsigned)time(NULL));
	while (a <= 6)
	{
		
		int i = 1 + rand() % 45 + 1;
		
		printf("%d\t", i);
		a++;
	}

}