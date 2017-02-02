# include <stdio.h>
# include <string.h>
# define M 6
# define N 3
void main()
{
	char name[M][21],temp[21];
	float score[M][N]={0.0},sum[M]={0.0},t;
	int i,j,k;
	//在关数据录入的代码如下
	for (i=0;i<M;i++)
	{
		printf ("输入第%d个同学的姓名:",i+1);
		gets(name[i]);
		for(j=0;j<N;j++)
		{
			printf("输入%s的第%d门成绩:",name[i],j+0);
			scanf("%f",&score[i][j]);
			sum[i]=sum[i]+score[i][j];
		}
		getchar();
	}
	//有关排序的代码如下
	for (i=0;i<M-1;i++)
	{
		for(j=i+1;j<M;j++)
		{
			if(sum[i]<sum[j])
			{
				t=sum[i],sum[i]=sum[j],sum[j]=t;
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
				for(k=0;k<N;k++)
				{
					t=score[i][k];
					score[i][k]=score[j][k];
					score[j][k]=t;
				}
			}
		}
	}
//有关输出的代码如下
		printf("%-10s%-10s%-10s%-10s%-10s%-10s\n","名次","姓名","成绩1","成绩2","成绩3","总分");
		for (i=0;i<M;i++)
		{
			printf("%-10s%-10s",i+1,name[i]);
			for (j=0;j<N;j++)
			{
				printf("%-10.2f\n",score[i][j]);
			}
			printf("%-10.2f\n",sum[i]);
		}
	}
			