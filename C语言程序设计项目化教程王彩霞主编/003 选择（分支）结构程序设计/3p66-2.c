#include <stdio.h>
void main()
{
	float score;   //����SCORE�������
	char grade;     //�������GRADE����ȼ��ַ�
	
	if(score>=60)
	{
	if(score>100)
	{
		printf("�������ڳ���100��\n");	
		return;
	}
	else 
	{
	if (score>=90){grade='A';}
	else if (score>=80){grade='B';}
	else if (score>=70){grade='C';}
	else {grade='D';}
	}
	}
	else
	{
		if(score>=0)
	{grade='E';}
	else
	{
	printf("�ɼ�����Ϊ����\n");
	return;
	}
	printf("��ĳɼ���%.2f,��Ӧ�ĵȼ�Ϊ^%c\n",score,grade);
}