<<<<<<< HEAD
#include<stdio.h>                   //程序作用:在屏幕上输出所有水仙花数
void main()
{
int x,n1,n2,n3;
x=100;
while(x<=999)
{
n1=x%10;
n2=x/10%10;
n3=x/100;
if(n1*n1*n1+n2*n2*n2+n3*n3*n3==x)
{
printf("%d  ",x);
}
x++;
=======
#include<stdio.h>                   //程序作用:在屏幕输出所有水仙花数？是指一个3位数，其各位数字的立方等于数字本身如：153＝1^3+5^3+3^3
void main()
{
	//下面的代码定义变量X,用来表示[100，999]之间的任意整数，定义变量N1,N2,N3分别存放X的个，十和百位数
int x,n1,n2,n3;
x=999;   //把[100，999]区间的首个数999送给X
while(x>=100)   //当X属于[100，999]区间的数时
{                 
n1=x%10;     //取出X的个位数送给N1
n2=x/10%10;   //取出X的十位数送给N2
n3=x/100;            //取出X的百位数给N3
if(n1*n1*n1+n2*n2*n2+n3*n3*n3==x)  //假定X满足水仙花条件
{
	printf("%d ",x);  //输出水仙花的值
}
x--;  //X减1,即X存放[100,999]区间内的下一个数
>>>>>>> e997e7077eeb25ff18907a86222f1a6910352d87
}
}