#include<stdio.h>  //����20��ѧ�ż��ɼ�,�����߷ּ���Ӧѧ��
#define N 20
void main()
{
	int num[N],i,k=0;//����������ѧ��
	float score[N];//���������ųɼ�
	for (i=0;i<N;i++)
	{
	printf("�������%d��ѧ����ѧ��:",i+1);
	scanf("%d",&num[i]);
	printf("�������%d��ѧ���ĳɼ�:",i+1);
	scanf("%f",&score[i]);
	if (score[k]<score[i])
	{
	k=i;
	}
	}
	printf("��߷�=%.2f,��Ӧ��ѧ��=%d\n",score[k],num[k]);
	}
