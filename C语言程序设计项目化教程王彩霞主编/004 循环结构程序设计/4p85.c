# include <stdio.h>//求K+(K+1)...+1000的累加和,K在程序运行时从键盘输入,分析下面的程序段哪个更合适?
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