#include <stdio.h>
#include<string.h>

int main()
{
	char aa[99];
	char ab[50];
	char abc[100];
	gets(aa);
	gets (ab);

	strncat(aa, ab,12);
	strcpy(abc, aa);
	strlen(abc);


	puts(aa);
	printf("%d\n", strlen(abc));
	
	
}