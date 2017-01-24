#include <stdio.h>
#include<string.h>
void main()
{
	char grade;  
	printf("输入你的成绩等级:");
	grade=getchar();
	switch (toupper(grade))
	{
	case 'A'=printf("你的分数段在[90,100]之间\n");break;
	case 'B'=printf("你的分数段在[80,90]之间\n");break;
	case 'C'=printf("你的分数段在[70,80]之间\n");break;
	case 'D'=printf("你的分数段在[60,70]之间\n");break;
	case 'E'=printf("你的分数段在[0,50]之间\n");break;
	default:printf("你输入的等级有误\n");
	}
}
