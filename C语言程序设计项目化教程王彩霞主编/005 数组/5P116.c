#include <stdio.h>
#define N 10
void main()
{
	float a[N],t;
	int i,j;
	for (i=0;i<N;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	/*�����˫��ѭ��ר����ð�ݷ����򣬴˴�Ϊ��������*/
	for (i=1;i<=N-1;i++)
	{
		for (j=0;j<N-i;j++)
		{
			if (a[j]<a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	printf("����������Ԫ��Ϊ��\n");
	for (i=0;i<N;i++)
	{
		printf("%.2f",a[i]);
	}
}

