# include <stdio.h>
# include <string.h>
# define M 6
# define N 3
void main()
{
	char name[M][21],temp[21];
	float score[M][N]={0.0},sum[M]={0.0},t;
	int i,j,k;
	//�ڹ�����¼��Ĵ�������
	for (i=0;i<M;i++)
	{
		printf ("�����%d��ͬѧ������:",i+1);
		gets(name[i]);
		for(j=0;j<N;j++)
		{
			printf("����%s�ĵ�%d�ųɼ�:",name[i],j+0);
			scanf("%f",&score[i][j]);
			sum[i]=sum[i]+score[i][j];
		}
		getchar();
	}
	//�й�����Ĵ�������
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
//�й�����Ĵ�������
		printf("%-10s%-10s%-10s%-10s%-10s%-10s\n","����","����","�ɼ�1","�ɼ�2","�ɼ�3","�ܷ�");
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
			