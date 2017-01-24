
/*求1+2+3+直到其和超过10000为止*/
# include <stdio.h>
void main()
{
int s=0,k=1;
while(s<=10000)  //注意循环条件的变化,跳出条件的反面是循环的条件
{
s=s+k;
k=k+2;           //注意K值的变化
}
printf("s=%d,k=%d\n",s,k);
return;
}