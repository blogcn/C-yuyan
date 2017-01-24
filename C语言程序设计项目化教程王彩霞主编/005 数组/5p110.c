#include<stdio.h>  //输入10个整数,然后按相反顺序输出它们的值
void main()
{
	int a[10],i;
	for (i=0;i<=10;i++)
	{
	printf("请输入第%d个整数:",i+1);
	scanf("%d",&a[i]);
	}
	printf("按相反的顺序输出如下:");
	for(i=9;i>=0;i--)
	{
	printf("%d",a[i]);
	}

}