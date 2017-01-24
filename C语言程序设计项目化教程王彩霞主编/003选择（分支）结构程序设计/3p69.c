#include <stdio.h>
#include<string.h>
void main()
{
	float score;//SCORE表示成绩
	char grade;  //GRADE代表等级
	printf("输入你的成绩:");
	scanf("%f",&score);
	if(score<0||score>100)
	{
	printf("输入的成绩有误\n");
	//exit(0);
	}
	switch((int)score/10)
	{
case0:case1:case2:case3:case4:
case5:grade='E';break;
case6:grade='D';break;
case7:grade='C';break;
case8:grade='B';break;
case9:
case10:grade='A';break;
	}
	printf("你的分数为%.2f,等级为:%c\n",score,grade);
	}
}
