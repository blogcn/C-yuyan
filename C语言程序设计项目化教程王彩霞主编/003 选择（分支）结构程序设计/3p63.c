#include <stdio.h>
void main()
{
	float score;   //定义SCORE代表分数
	char grade;     //定义变量GRADE代表等级字符
	printf("请输入你的成绩:");
	scanf("%f",&score);    //输入成绩并送给SCORE
	if (score<0||score>100)  //当输入的成绩小于0或者大于100
	{
	printf("输入的成绩只能在0~100之间\n");
	return;//结束本函数的执行
	}
	if(score>=90){grade='A';}
	else if(score>=80){grade='B';}//条件也可以写成score>=80&&score<=90
	else if(score>=70){grade='C';}//条件也可以写成score>=70&&score<=80
	else if(score>=60){grade='D';}//条件也可以写成score>=60&&score<=70
	else {grade='E';}
	printf("你的成绩是%.2f，对应的等级为%c\n",score,grade);
}