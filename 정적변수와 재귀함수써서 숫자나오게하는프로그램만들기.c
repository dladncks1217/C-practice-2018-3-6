#include<stdio.h>
void aa(int a);
int main()
{
	int a;
	scanf("%d", &a);
	aa(a);

	return 0;
}
void aa(int a)
{
	static int b = 1;
	if (b > a)
	{
		return 0;
	}
	printf("���� %d\n", b);
	b++;
	aa(a);

}
