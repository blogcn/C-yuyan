#include <stdio.h>
#include<string.h>
void main()
{
	char grade;  
	printf("������ĳɼ��ȼ�:");
	grade=getchar();
	switch (toupper(grade))
	{
	case 'A'=printf("��ķ�������[90,100]֮��\n");break;
	case 'B'=printf("��ķ�������[80,90]֮��\n");break;
	case 'C'=printf("��ķ�������[70,80]֮��\n");break;
	case 'D'=printf("��ķ�������[60,70]֮��\n");break;
	case 'E'=printf("��ķ�������[0,50]֮��\n");break;
	default:printf("������ĵȼ�����\n");
	}
}
