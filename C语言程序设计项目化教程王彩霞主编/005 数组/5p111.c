#include<stdio.h>  //����20��ѧ�ż��ɼ�,�����߷ּ���Ӧѧ��
#define N 20
void main()
{
	int num[N],i,number;//����������ѧ��
	int score[N],max;//���������ųɼ�
	for (i=0;i<N;i++)
	{
	printf("�������%d��ѧ����ѧ��:",i+1);
	scanf("%d",&num[i]);
	printf("�������%d��ѧ���ĳɼ�:",i+1);
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
	printf("��߷�=%.2f,��Ӧ��ѧ��=%d\n",max,number);
	}
