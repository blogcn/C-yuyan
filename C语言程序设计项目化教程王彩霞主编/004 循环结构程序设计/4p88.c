/*�æ�/4Լ����1-1/3+1/5=1/7+...��ʽ,��еĽ���ֱֵ�����һ��ľ���ֵС��1-�ĸ����η�Ϊֹ,��FOR��WHILE���ַ���*/
# include <stdio.h>
void main()
{
float s=0,k=1,pi;
int t=1;
while(1/k>=1e-6)
{
s=s+t/k;
k=k+2;
t=-t;
}
pi=4*s;
printf("�еĽ���ֵ=%f\n",pi);
}