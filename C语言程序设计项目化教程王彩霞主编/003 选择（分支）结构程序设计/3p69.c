#include <stdio.h>
#include<string.h>
void main()
{
	float score;//SCORE��ʾ�ɼ�
	char grade;  //GRADE����ȼ�
	printf("������ĳɼ�:");
	scanf("%f",&score);
	if(score<0||score>100)
	{
	printf("����ĳɼ�����\n");
	//exit(0);
	}
	switch((int)score/10)
	{
case0:case1:case2:case3:case4:
case5:grade='E';break;
case6:grade='D';break;
case7:grade='C';break;
case8:grade='B';break;
case9:
case10:grade='A';break;
	}
	printf("��ķ���Ϊ%.2f,�ȼ�Ϊ:%c\n",score,grade);
	}
}
