#include <stdio.h>
#include<string.h>

int main()
{
	char aa[100];
	char ab[50];
	gets(aa);
	gets (ab);

	strcat(aa, ab);

	puts(aa);
	
}