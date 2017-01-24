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
	/*下面的双重循环专门用冒泡法排序，此处为降序排列*/
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
	printf("排序后的数组元素为：\n");
	for (i=0;i<N;i++)
	{
		printf("%.2f",a[i]);
	}
}

