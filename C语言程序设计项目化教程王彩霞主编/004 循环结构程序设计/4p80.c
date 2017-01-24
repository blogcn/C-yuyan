#include<stdio.h>                   //程序作用:输出100行"好好学习"
void main()
{
	int count=0;  //计数器变量COUNT置0
	while (count<100)//COUNT<100成立时,就执行循环体,然后再重复该过程
	{                  //循环体开始处
	printf("好好学习\n");
	count++;                  //COUNT的值增1,记录忆经输出的行数
	}                            //循环体结束处
	printf("输出任务已经完成,再见\n");                       //注意:循环体不满足时,就会执行这条语句
}
