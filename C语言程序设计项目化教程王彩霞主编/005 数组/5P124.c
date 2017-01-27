#include <stdio.h>
#define N 10
void main()
{
	int a[N][N];
	int i,j;
	for (i=0;i<N;i++)
	{
		for (j=0;j<i;j++)
		{
			if(i==j||j==0)
			{
				a[i][j]=1;
			}
			else
			{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
	for (i=1;i<N;i++)
		{
		for (j=0;j<=i;j++)
			{
			printf("%-6d",a[i][j]);
			}
			printf("\n");
		}
	}
}