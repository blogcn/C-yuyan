#include<stdio.h>  //输入20个学号及成绩,输出最高分及对应学号
#define N 20
void main()
{
	int num[N],i,number;//定义数组存放学号
	int score[N],max;//定义数组存放成绩
	for (i=0;i<N;i++)
	{
	printf("请输入第%d个学生的学号:",i+1);
	scanf("%d",&num[i]);
	printf("请输入第%d个学生的成绩:",i+1);
	scanf("%f",&score[i]);
	}
	number=num[0],max=score[0];
	for (i=1;i<N;i++)
	{
		if(max<score[i])
		{
			max=score[i];
			number=num[i];
		}
	}
	printf("最高分=%.2f,对应的学号=%d\n",max,number);
	}
