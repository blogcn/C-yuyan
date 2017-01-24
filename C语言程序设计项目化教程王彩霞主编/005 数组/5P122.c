#include <stdio.h>
#define M 3
#define N 4
void main()
{
	int i,j,a[M][N];
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("a[%d][%d]=",i1,j);
			scanf("%d",&a[i][j]);
		}
		
	}

	for (i=1;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("%-6d",a[i][j]);
		}
		printf("\n");
	}

}