#include<stdio.h>                   //��������:��1+2+...+n�ĺ�//�������������ȫ�ǿո���ʾ���´���:unknown character '0xa1'
void main()
{
int sum=0,i=1,n;    //һ�������,��������ۼӺ͵ı�����ֵ����Ҫ��0
printf("n=");   //��ʾ�������N��ֵ
scanf("%d",&n); //�Ӽ�����������ε�ֵ
while (i<=n)
{                 
sum=sum+i;
i++;
}   
if(sum>0)
{
printf("[1,%d]֮��������ۼӺ�=%d\n",n,sum);   
}
else
{
printf("%d������ݲ��ʺ����ۼ�����\n",n);
}                    
}
