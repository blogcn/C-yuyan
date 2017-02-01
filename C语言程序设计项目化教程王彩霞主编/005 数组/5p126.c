# define M 4
# define N 4
void main()
{
	float score[M][N],s;
	int i,j,num[M];
	for(i=0;i<M;i++)
	{printf("请输入第%d个学生的学号=",i+1);
	scanf("%d",&num[i]);
	s=0;
	for(j=0;j<N-1;j++)
	{
		printf("请输入该同学的%d门课成绩=",j+1);
		scanf("%f",&score[i][j]);
		s=s+score[i][j];
	}
	score[i][N-1]=s/(N-1);
	}
	printf("%-10s%-10s%-10s%-10s%-10s\n","学号","成绩1","成绩2","成绩3","平均");
	for (i=0;i<M;i++)
	{printf("%-10d",num[i]);
	for(j=0;j<N;j++)
	{
		printf("%-10.2f",score[i][j]);
	}
	printf("\n");
}
}
