#include <stdio.h>
#define N 4
void main()
{
	float score[N],t;
	int num[N],i,j,temp;
	for (i=0;i<N;i++)
	{
		printf("�����%d��ѧ����ѧ�ţ�",i+1);
		scanf("%d",&num[i]);
		printf("�����%d��ѧ���ĳɼ���",num[i]);
		scanf("%f",&score[i]);
	}
	/*�����˫��ѭ��ר����ѡ�񷨸�SCORE���齵�����У����SCORE������Ԫ�ؽ��������Ӧ��NUM����Ԫ��Ҳ������֮����*/
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
	printf("%-10s %-10s %-10s \n","����","ѧ��","�߿��ɼ�");
	for (i=0;i<N;i++)
	{
		printf("%-10d %-10d %10.1f \n",i+1,num[i],score[i]);
	}
}

