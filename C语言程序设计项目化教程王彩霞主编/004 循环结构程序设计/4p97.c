
/*求解百钱买百鸡的问题:三重循环实现*/
# include <stdio.h>
void main()
{
int x,y,z;
for(x=1;x<20;x++)  //循环公鸡
for(y=1;y<33;y++)   //循环母鸡
for(z=1;z<100;z++)   //循环小鸡
if(x+y+z==100&&x*5+y*3+z*1.0/3==100)   //判断是否满足条件
printf("公鸡=%d,母鸡=%d,小鸡=%d\n",x,y,z);
}