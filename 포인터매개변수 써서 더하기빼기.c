#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	get_sum_diff(a, b, &c, &d);

	printf("%d  %d", c, d);

}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;

}