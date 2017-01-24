
/*输出AA队列*/
# include <stdio.h>
void main()
{
int i,j;
i=1;          /*外层循环开始前变量I赋初值1*/
do
{               /*内层循环开始前变量J赋初值1*/ 
	j=1;
	while(j<=10)  
{                  
printf("A");
j++;          /*内层循环变量J增值1*/
}
printf("\n");
i++;            /*外层循环变量I增值1*/
}while(i<=5);
}
