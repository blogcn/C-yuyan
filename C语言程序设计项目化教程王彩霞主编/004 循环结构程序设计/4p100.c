
/*求1+2+3+直到其和超过10000为止*/
# include <stdio.h>
void main()
{
int s=0,k=0;
while(1)  //循环条件为1,说明永远成立
{
k=k+1;
if(k%2==0)continue;  //如果K为偶数,则回到WHILE处
s=s+k;        //K是奇数,则累加
if(s>10000)break;  //满足S>10000,就执行BREAK结束循环
}
printf("s=%d,k=%d\n",s,k);
}