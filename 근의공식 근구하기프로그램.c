#include<stdio.h>
#include<math.h>

int function(int aa, int bb, int cc);
int function2(int aa, int bb, int cc);

int main()
{


	printf("ax^2+bx+c 의 근의 값을 계산해주는 프로그램입니다.\n");

	int a;
	int b;
	int c;


	printf("a값 입력");
	scanf("%d", &a);
	printf("\nb값 입력");
	scanf("%d", &b);
	printf("\nc값 입력");
	scanf("%d", &c);


	if ((b*b - 4 * a*c) > 0)
	{

		int result;
		int result_2;
		result = function(a, b, c);
		result_2 = function2(a, b, c);

		printf("실근은 %d와 %d입니다.", result, result_2);
	}
	else if (((b*b - 4 * a*c) == 0) != (a == 0 && b == 0 && c == 0)!= (a == 0 && b == 0 && c == 1))
	{
		int result_equal;
		result_equal = function(a, b, c);
		printf("실근은 중근으로 %d 입니다.", result_equal);

	}
	else if ((b*b - 4 * a*c) < 0)
	{
		printf("0개의 실근입니다. ");
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		printf("부정입니다.");
	}
	else if (a == 0 && b == 0&&c == 1)
	{
		printf("불능입니다.");
	}
	else
	{
		printf("잘못 입력하셨습니다.");
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