#include <stdio.h>

int main(void)
{
	int a;
	long b = 1;
	int i;
	printf("a���� �Է��Ͻÿ�.");
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
		b = b * i;

	printf("%d", b);

	return 0;
}