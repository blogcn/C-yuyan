#include <stdio.h>
void main()
{
	float score;   //����SCORE�������
	char grade;     //�������GRADE����ȼ��ַ�
	if(score<0||score>100)
	{
	printf("����ĳɼ�ֻ����0~100֮��\n");	
	}
	else  //�ٶ�����ĳɼ���[1~100]֮��,��Ӧ����������ٴ�ʹ����IF���
	{
	if (score>=90){grade='A';}
	else if (score>=80){grade='B';}
	else if (score>=70){grade='C';}
	else if (score>=60){grade='D';}
	else if {grade='E';}
	printf("��ĳɼ���%.2f����Ӧ�ĵȼ�Ϊ%c\n",score,grade);
	}
}