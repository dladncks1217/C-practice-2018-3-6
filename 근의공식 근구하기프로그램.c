#include<stdio.h>
#include<math.h>

int function(int aa, int bb, int cc);
int function2(int aa, int bb, int cc);

int main()
{


	printf("ax^2+bx+c �� ���� ���� ������ִ� ���α׷��Դϴ�.\n");

	int a;
	int b;
	int c;


	printf("a�� �Է�");
	scanf("%d", &a);
	printf("\nb�� �Է�");
	scanf("%d", &b);
	printf("\nc�� �Է�");
	scanf("%d", &c);


	if ((b*b - 4 * a*c) > 0)
	{

		int result;
		int result_2;
		result = function(a, b, c);
		result_2 = function2(a, b, c);

		printf("�Ǳ��� %d�� %d�Դϴ�.", result, result_2);
	}
	else if (((b*b - 4 * a*c) == 0) != (a == 0 && b == 0 && c == 0)!= (a == 0 && b == 0 && c == 1))
	{
		int result_equal;
		result_equal = function(a, b, c);
		printf("�Ǳ��� �߱����� %d �Դϴ�.", result_equal);

	}
	else if ((b*b - 4 * a*c) < 0)
	{
		printf("0���� �Ǳ��Դϴ�. ");
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		printf("�����Դϴ�.");
	}
	else if (a == 0 && b == 0&&c == 1)
	{
		printf("�Ҵ��Դϴ�.");
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}



}
int function(int aa, int bb, int cc)
{
	int result;
	result = (-bb + sqrt(bb*bb - 4 * aa*cc)) / (2 * aa);
	return result;

}
int function2(int aa, int bb, int cc)
{
	int result;
	result = (-bb - sqrt(bb*bb - 4 * aa*cc)) / (2 * aa);
	return result;

}