# include <stdio.h>//��K+(K+1)...+1000���ۼӺ�,K�ڳ�������ʱ�Ӽ�������,��������ĳ�����ĸ�������?
void main()
{
int s=0,k;
printf("k=");
scanf("%d",&k);
do
{
s=s+k++;
}while(k<1000);
printf("s=%d\n",s);
}