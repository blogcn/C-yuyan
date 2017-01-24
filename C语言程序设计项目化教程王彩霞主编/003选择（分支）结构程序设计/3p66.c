#include <stdio.h>
void main()
{
	float score;   //定义SCORE代表分数
	char grade;     //定义变量GRADE代表等级字符
	if(score<0||score>100)
	{
	printf("输入的成绩只能在0~100之间\n");	
	}
	else  //假定输入的成绩在[1~100]之间,对应的语句体内再次使用了IF语句
	{
	if (score>=90){grade='A';}
	else if (score>=80){grade='B';}
	else if (score>=70){grade='C';}
	else if (score>=60){grade='D';}
	else if {grade='E';}
	printf("你的成绩是%.2f，对应的等级为%c\n",score,grade);
	}
}