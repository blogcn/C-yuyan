#include<stdio.h>  //输入20个学号及成绩,输出最高分及对应学号
#define N 20
void main()
{
	int num[N],i,k=0;//定义数组存放学号
	float score[N];//定义数组存放成绩
	for (i=0;i<N;i++)
	{
	printf("请输入第%d个学生的学号:",i+1);
	scanf("%d",&num[i]);
	printf("请输入第%d个学生的成绩:",i+1);
	scanf("%f",&score[i]);
	if (score[k]<score[i])
	{
	k=i;
	}
	}
	printf("最高分=%.2f,对应的学号=%d\n",score[k],num[k]);
	}
