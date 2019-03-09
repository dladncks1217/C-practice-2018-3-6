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
	printf("ผ๖ดย %d\n", b);
	b++;
	aa(a);

}
