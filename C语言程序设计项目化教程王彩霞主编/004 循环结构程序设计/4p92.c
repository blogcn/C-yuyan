
/*�õ�������A������ƽ����X*/
# include <stdio.h>
# include<math.h>
void main()
{
float a,x0,x1;


a=-1;
while (a<0)
{
printf("������һ���Ǹ���:");
scanf("%f",&a);
}
x0=a/2;
x1=(x0+a/x0)/2;
while(fabs(x1-x0)>=1e-6)
{
x0=x1;
x0=(x0+a/x0)/2;
}
printf("�������Ϊ%g,������ƽ����Ϊ%g\n",a,x1);
}