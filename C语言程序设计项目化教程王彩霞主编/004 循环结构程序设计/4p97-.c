
/*循环语句体为空的情况*/
# include <stdio.h>
void main()
{
int s=0,k=1;
while(s=s+k,k++,k<=100);  //注意此处循环体为空
printf("s=%d\n",s);
}