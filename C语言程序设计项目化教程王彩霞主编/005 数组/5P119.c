#include <stdio.h>
#define N 4
void main()
{
	float score[N],t;
	int num[N],i,j,temp;
	for (i=0;i<N;i++)
	{
		printf("输入第%d个学生的学号：",i+1);
		scanf("%d",&num[i]);
		printf("输入第%d个学生的成绩：",num[i]);
		scanf("%f",&score[i]);
	}
	/*下面的双重循环专门用选择法给SCORE数组降序排列，如果SCORE的数组元素交换，则对应的NUM数组元素也必须随之交换*/
	for (i=1;i<=N-2;i++)
	{
		for (j=i+1;j<=N-1;j++)
		{
			if (score[i]<score[j])
			{
				t=score[i];score[i]=score[j];score[j]=t;
				temp=num[i];num[i]=num[j];num[j]=temp;
			}
		}
	}
	printf("%-10s %-10s %-10s \n","名次","学号","高考成绩");
	for (i=0;i<N;i++)
	{
		printf("%-10d %-10d %10.1f \n",i+1,num[i],score[i]);
	}
}

