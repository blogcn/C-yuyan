#include <stdio.h>
void main()
{
	float score;   //����SCORE�������
	char grade;     //�������GRADE����ȼ��ַ�
	printf("��������ĳɼ�:");
	scanf("%f",&score);    //����ɼ����͸�SCORE
	if (score<0||score>100)  //������ĳɼ�С��0���ߴ���100
	{
	printf("����ĳɼ�ֻ����0~100֮��\n");
	return;//������������ִ��
	}
	if(score>=90){grade='A';}
	else if(score>=80){grade='B';}//����Ҳ����д��score>=80&&score<=90
	else if(score>=70){grade='C';}//����Ҳ����д��score>=70&&score<=80
	else if(score>=60){grade='D';}//����Ҳ����д��score>=60&&score<=70
	else {grade='E';}
	printf("��ĳɼ���%.2f����Ӧ�ĵȼ�Ϊ%c\n",score,grade);
}