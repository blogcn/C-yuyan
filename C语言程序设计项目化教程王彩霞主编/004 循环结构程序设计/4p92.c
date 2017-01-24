
/*用迭代法求A的自述平方根X*/
# include <stdio.h>
# include<math.h>
void main()
{
float a,x0,x1;


a=-1;
while (a<0)
{
printf("请输入一个非负数:");
scanf("%f",&a);
}
x0=a/2;
x1=(x0+a/x0)/2;
while(fabs(x1-x0)>=1e-6)
{
x0=x1;
x0=(x0+a/x0)/2;
}
printf("输入的数为%g,其算术平方根为%g\n",a,x1);
}