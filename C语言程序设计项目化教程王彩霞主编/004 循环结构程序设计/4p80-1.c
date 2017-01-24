#include<stdio.h>         //程序作用:输入50个同学的成绩,求出平均分
void main()
{
	float sum=0,score;         //定义变量SUM存放部分,初值为0.SCORE临时存放一个学生成绩
	int i=1;                //定义变量I,用来记录学生序号,初值为1
	while (i<50)
	{                  
	printf("请输入第%d个学生成绩:",i);               //输入提示信息,以了解输入进度
	scanf("%f",&score);          //输入第I个成绩,送给变量SCORE
	sum=sum+score;        //把成绩累加到和变量SUM中
	i++;               //循环变量I的值增加1
	}                            //循环体结束处
	printf("平均分=%.2f\n",sum/50);                       //输出平均分
}
