#include<stdio.h>  //����10������,Ȼ���෴˳��������ǵ�ֵ
void main()
{
	int a[10],i;
	for (i=0;i<=10;i++)
	{
	printf("�������%d������:",i+1);
	scanf("%d",&a[i]);
	}
	printf("���෴��˳���������:");
	for(i=9;i>=0;i--)
	{
	printf("%d",a[i]);
	}

}