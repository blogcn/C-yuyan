#include<stdio.h>
void main()
{
	int n1,n2,n3,n4;
	printf("请输入第1个数:");
	scanf("%d",&n1);
	printf("请输入第2个数:");
	scanf("%d",&n2);
	printf("请输入第3个数:");
	scanf("%d",&n3);
	printf("请输入第4个数:");
	scanf("%d",&n4);
	printf("你输入的4个数分别为:%d,%d,%d,%d\n",n1,n2,n3,n4);
	printf("逆序为:%d,%d,%d,%d\n",n4,n3,n2,n1);

}