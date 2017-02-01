#include <string.h>
#include <stdio.h>
void main()
{
	char c[80],m[80] ={'\0'};
	int i=0;
	printf("请输入一行字符:\n");
	gets(c);
	for (i=0;i < strlen(c);i++)
	{
	if (c[i]>='A'&& c[i]<='Z')
	{
		m[i]=155-c[i];
	}
	else if(c[i]>='a'&& c[i]<='z')
	{
		m[i]=219-c[i];
	}
	else
	{
		m[i]=c[i];
	}
	}
	printf("对应密码为:\n");
	puts (m);
}
