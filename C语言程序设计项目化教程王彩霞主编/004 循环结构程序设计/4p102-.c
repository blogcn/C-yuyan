
/*输出100~200之间的所有素数*/
# include <stdio.h>
void main()
{
int x,k,n=0;  //变量N用来记录素数的个数
for(k=2;k<=x/2&&x%k!=0;k++);
if (k>x/2){
printf("%-6d",x);
n++;
if(n%7==0){printf("\n");}
}
}
