
/*��1+2+3+ֱ����ͳ���10000Ϊֹ*/
# include <stdio.h>
void main()
{
int s=0,k=1;
while(s<=10000)  //ע��ѭ�������ı仯,���������ķ�����ѭ��������
{
s=s+k;
k=k+2;           //ע��Kֵ�ı仯
}
printf("s=%d,k=%d\n",s,k);
return;
}