# include <stdio.h>
# include <string.h>
void printStar()
{
	int i,j;
		for (i=1;i<=5;i++)
	{
		for (j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	void main()
	{
	printf("第一次输出如下图形:\n");
	printStar();
	printf("第二次输出如下图形:\n");
	printStar();
	printf("第三次输出如下图形:\n");
	printStar();
	}
