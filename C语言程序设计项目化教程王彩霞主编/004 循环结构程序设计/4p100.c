
/*��1+2+3+ֱ����ͳ���10000Ϊֹ*/
# include <stdio.h>
void main()
{
int s=0,k=0;
while(1)  //ѭ������Ϊ1,˵����Զ����
{
k=k+1;
if(k%2==0)continue;  //���KΪż��,��ص�WHILE��
s=s+k;        //K������,���ۼ�
if(s>10000)break;  //����S>10000,��ִ��BREAK����ѭ��
}
printf("s=%d,k=%d\n",s,k);
}