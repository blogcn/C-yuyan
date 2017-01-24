/*用FOR语句及WHILE语句求[1,1000]的厅数累加和,并观察两种方法的有关语句的对应关系和位置*/
# include <stdio.h>
void main()
{
int sum,i;
sum=0;
for (i=1;i<1000;i=i+2)
{
sum=sum+i;
}
printf("sum=%d\n",sum);
}