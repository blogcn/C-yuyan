
/*����Ǯ��ټ�������*/
# include <stdio.h>
void main()
{
int x,y,z;
for(x=1;x<20;x++)
{
for(y=1;y<33;y++)
{
z=100-x-y;
if(x*5+y*3+z*1.0/3==100)
{
printf("����=%d,ĸ��=%d,С��=%d\n",x,y,z);
}
}
}
}
