#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,area,s;
	printf("�������һ���ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&a);
	printf("������ڶ����ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&b);
	printf("������������ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&c);
	s=(a+b+c)/2;  //�ñ���s���洢���ߺ͵�һ��
	if(a+b>c&&a+c>b&&b+c>a)  /*�������������ߺʹ��ڵ����ߵ�����ʱ*/
		{
			area=sqrt(s*(s-a)*(s-b)*(s-c));   
			printf("�����εı߳��ֱ�Ϊ%.2f,%.2f,%.2f,���=%.2f\n",a,b,c,area);  
		}
		else   //�Բ��������������ݵĴ���
			{
			printf("�����������%.2f,%.2f,%.wf���ܹ��������ε�����\n",a,b,c);
			}
	printf("ллʹ�ñ�����\n");
}

