# include <stdio.h>
void main()
{

int n,k;
unsigned long s;
do 
{
printf("n=");
scanf("%d",&n);
}while(n<0||n>10);
k=1,s=1;
do
{
s=s*k;
k=k+1;
}while(k<=n);
printf("%d!=%lu\n",n,s);
}