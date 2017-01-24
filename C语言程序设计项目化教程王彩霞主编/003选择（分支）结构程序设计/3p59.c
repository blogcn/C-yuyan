#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,area,s;
	printf("请输入第一条边的长度=");  //提示输入边长
	scanf("%f",&a);
	printf("请输入第二条边的长度=");  //提示输入边长
	scanf("%f",&b);
	printf("请输入第三条边的长度=");  //提示输入边长
	scanf("%f",&c);
	s=(a+b+c)/2;  //用变量s来存储三边和的一半
	if(a+b>c&&a+c>b&&b+c>a)  /*当满足任意两边和大于第三边的条件时*/
	{
	area=sqrt(s*(s-a)*(s-b)*(s-c));   
	printf("三角形的边长分别为%.2f,%.2f,%.2f,面积=%.2f\n",a,b,c,area);  
	}
	printf("谢谢使用本程序！\n");
}

