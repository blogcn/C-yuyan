#include <stdio.h>
void main()
{
	float score;   //定义SCORE代表分数
	char grade;     //定义变量GRADE代表等级字符
	
	if(score>=60)
	{
	if(score>100)
	{
		printf("程序不能在超过100分\n");	
		return;
	}
	else 
	{
	if (score>=90){grade='A';}
	else if (score>=80){grade='B';}
	else if (score>=70){grade='C';}
	else {grade='D';}
	}
	}
	else
	{
		if(score>=0)
	{grade='E';}
	else
	{
	printf("成绩不能为负数\n");
	return;
	}
	printf("你的成绩是%.2f,对应的等级为^%c\n",score,grade);
}