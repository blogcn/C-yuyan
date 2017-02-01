void main()
{
	char c[80],m[80];
	int i=0,n;
	printf("请输入一行字符:\n");

	while(i<80 && (c[i]=getchar())!='\n')
	{
		i++;
	}
	n=i;
	for (i=0;i<n;i++)
	{
		if (c[i]>='A'&& c[i]<='Z')
		{
			m[i]=155-c[i];
		}
		else if (c[i]>='a'&& c[i]<='z')
		{
			m[i]=219-c[i];
		}
		else
		{
			m[i]=c[i];
		}
	}
	printf("对应密码为:\n");
	for (i=0;i<n;i++)
	{printf("%c",m[i]);
	}
	printf("\n");
}
