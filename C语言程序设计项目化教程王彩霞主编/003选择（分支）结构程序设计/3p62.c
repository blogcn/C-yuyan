#include <stdio.h>
void main()
{
int numl1,numl2,numl3,max;  //�����ĸ������ֱ��ʾ�������������ֵ
printf("�������һ������=");
scanf("%d",&numl1);
printf("������ڶ�������=");
scanf("%d",&numl2);
printf("���������������=");
scanf("%d",&numl3);
max=numl1;    //�ѵ�һ�����������ֵ�͸�MAX

if(numl2>max)  //��NUML2����MAXʱ 
{
max=numl2;     //MAX����NUML2��ֵ
}
if
(max<numl3)       //��NUML3����MAXʱ 
{
max=numl3;           //MAX����NUML3��ֵ
}

printf("%d,%d,%d�е������Ϊ��%d\n",numl1,numl2,numl3,max);
}