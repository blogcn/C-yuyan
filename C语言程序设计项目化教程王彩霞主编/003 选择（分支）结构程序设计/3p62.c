#include <stdio.h>
void main()
{
int numl1,numl2,numl3,max;  //定义四个变量分别表示三个整数和最大值
printf("请输入第一个整数=");
scanf("%d",&numl1);
printf("请输入第二个整数=");
scanf("%d",&numl2);
printf("请输入第三个整数=");
scanf("%d",&numl3);
max=numl1;    //把第一个数当成最大值送给MAX

if(numl2>max)  //当NUML2大于MAX时 
{
max=numl2;     //MAX接受NUML2的值
}
if
(max<numl3)       //当NUML3大于MAX时 
{
max=numl3;           //MAX接受NUML3的值
}

printf("%d,%d,%d中的最大数为：%d\n",numl1,numl2,numl3,max);
}