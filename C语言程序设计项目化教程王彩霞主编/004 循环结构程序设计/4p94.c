/*输出AA队列*/
# include <stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)/*外层循环*/
{                /*本循环中,该层括号对不能省*/
for(j=1;j<=10;j++)  /*内层循环*/
{                  /*本循环括号对可省*/
printf("A");
}
printf("\n");
}
}