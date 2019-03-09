#include<stdio.h>
int main(void)
{
	char ch;


	

	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
		printf("모음입니다");
		break;

	
	default:
		printf("자음입니다.");
	}
}