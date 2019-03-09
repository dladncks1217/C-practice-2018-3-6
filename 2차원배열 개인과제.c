#include <stdio.h>

int main()
{

	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i[3][3] = { 1,0,0,0,1,0,0,0,1 };
	int c[3][3] = { 0,0,0,0,0,0,0,0,0 };
	int x, y, z, q, w;
	int e;
	
		for (x = 0; x <= 2; x++)
			{
				
				for (y = 0; y <= 2; y++)
				{
					for (int b = 0; b <3 ; b++) {
						c[x][y] += a[x][b] * i[b][y];
					}
				}
				
		}
		
	printf("%d %d %d\n%d %d %d\n%d %d %d", c[0][0], c[0][1], c[0][2], c[1][0], c[1][1], c[1][2], c[2][0], c[2][1], c[2][2]);
}