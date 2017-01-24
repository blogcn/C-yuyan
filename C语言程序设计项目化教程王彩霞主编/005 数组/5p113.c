#include <stdio.h>//5p113
void main()
{
long int f[40]={1,1};
int i;
for (i=2;i<=39;i++)
{
f[i]=f[i-2]+f[i-1];
}
for (i=0;i<=39;i++)
{
if(i%5==0)
{
printf("\n");
}
printf("12ld",f[i]);
}
printf("\n");	
}
