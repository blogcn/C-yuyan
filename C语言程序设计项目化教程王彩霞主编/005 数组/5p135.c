# include <stdio.h>
# include <string.h>
# define N 10
void main()
{
	char a[N][81],temp[81];
	int i,j;
	for(i=0;i<N;i++)
	{
    printf("�����%d���ַ�:",i+1);
	gets(a[i]);
    }
	for(i=0;i<N;i++)
		{
			for (j=0;j<N-i;j++)
			{
				if (strlen(a[j])>strlen(a[j+1]))
				{
					strcpy(temp,a[j]);
					strcpy(a[j],a[j+1]);
					strcpy(a[j+1],temp);
				}
			}
		}
	printf("�Ӷ̵����������:\n");
	for (i=0;i<N;i++)
	{
		puts(a[i]);
	}
}
