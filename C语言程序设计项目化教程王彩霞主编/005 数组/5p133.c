#include <string.h>
#include <stdio.h>
void main()
{
	char name[80];
	printf ("请输入姓名:");
	gets (name);
	if (strcmp(name,"姚明")==0)
	{
		printf("姚明,你可真高呀!\n");
	}
	else if (strcmp(strlwr(name),"steve jobs")==0)
	{
		printf("%s,我们非常感谢你,也非常相信你!\n",name);
	}
	else 
	{
		printf("你好!%s,谢谢你参加我们的游戏\n",name);
	}
}
