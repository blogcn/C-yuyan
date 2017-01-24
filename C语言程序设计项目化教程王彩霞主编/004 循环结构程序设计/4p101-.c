
/*求1+2+3+直到其和超过10000为止,用GOTO语句实现*/
# include <stdio.h>
void main()
{
int s=0,k=1;
L1:s=s+k;  //注意L1是一个语句标号,其后必须跟冒号
k=k+1;
if (k<=1000)  
{
goto L1;//由于L1标识的位置在本语句之前,所以GOTO就构成循环
}
printf("%d\n",s);
}