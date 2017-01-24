#include<stdio.h>                   //程序作用:求1+2+...+n的和//如果输入中有用全角空格提示如下错误:unknown character '0xa1'
void main()
{
int sum=0,i=1,n;    //一般情况下,用来存放累加和的变量初值都需要置0
printf("n=");   //提示输入变量N的值
scanf("%d",&n); //从键盘输入变量Ｎ的值
while (i<=n)
{                 
sum=sum+i;
i++;
}   
if(sum>0)
{
printf("[1,%d]之间的整数累加和=%d\n",n,sum);   
}
else
{
printf("%d这个数据不适合做累加上限\n",n);
}                    
}
