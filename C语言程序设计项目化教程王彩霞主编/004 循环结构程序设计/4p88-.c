/*用π/4约等于1-1/3+1/5=1/7+...公式,求π的近似值直到最后一项的绝对值小于1-的负六次方为止,用FOR和WHILE两种方法*/
# include <stdio.h>
void main()
{
float s=0,k=1,pi;
int t;
for(t=1,k-1;1/k>=1e-6;k=k+2,t=-t)
{
s=s+t/k;

}
pi=4*s;
printf("π的近似值=%f\n",pi);
}