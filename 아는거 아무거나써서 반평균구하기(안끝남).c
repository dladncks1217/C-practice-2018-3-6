#include <stdio.h>
#include<string.h>

struct hiroo;
int class_score(int a[], int b);
int average();
int main()
{
	int sum = 0, sum2 = 0, sum3 = 0, all_average;

	struct hiroo class_1, class_2, class_3;
	for (int c = 1; c <= 3; c++)
	{
		for (int b = 0; b <= 4; b++)
		{
			if (c == 1) {
				class_score(class_1.score1, b);
			}
			else if (c == 2) {
				class_score(class_2.score1, b);
			}
			else {
				class_score(class_3.score1, b);
			}
		}

	}

	for (int x = 1; x <= 3; x++)
	{
		for (int y = 0; y <= 4; y++)
		{
			if (x==1) sum = sum + class_1.score1[y];

			else if (x == 2)   sum2 = sum2 + class_2.score1[y];

			else  sum3 = sum3 + class_3.score1[y];
		}

	}

	all_average = (sum + sum2 + sum3) / 3;

	printf("%d %d %d %lf", sum, sum2, sum3, all_average);


}
struct hiroo
{

	 int score1[5];

};

int class_score(int a[], int b)
{
	
	scanf("%d", a[b]);
}
int average()
{

}