#include<stdio.h>

void add(int a, int b);
void subtract(int a, int b);
int main()
{

	int a, b;
	char c;
	void(*pointer)(int, int) = NULL;

	scanf("%d %c %d", &a, &c, &b);
	
	if (c == '+')
	{
		pointer = add;
	}
	else if (c == '-')
	{
		pointer = subtract;
	}

	pointer(a, b);


}
void add(int a, int b)
{
	printf("%d", a + b);
}
void subtract(int a, int b)
{
	printf("%d", a - b);
}