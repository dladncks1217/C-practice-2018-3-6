#include<stdio.h>
int main(void)
{

	int a;
	int b;

	printf("정수를 입력하시면 2의 보수로 바꿔드립니다.");
	printf("정수를 입력하세요.");
	scanf("%d", &a);

	b = (a ^ 0xffffffff) + 0x00000001;
	printf("입력하신 정수의 보수는 %d 입니다.", b);

	return 0;

}