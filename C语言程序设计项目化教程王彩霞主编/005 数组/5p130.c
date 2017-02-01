#include<stdio.h>
void main()
{
	char a[6][5];
	int i,j,k;
	for (i=0;i<6;i++)
	{
		for (j=0;j<5;j++)
		{
			a[i][j]='*';
		}
	}
	for (i=0;i<6;i++)
	{
		for (k=1;k<=i*2;k++)
		{
			printf(" ");
		}
		for (j=0;j<5;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
