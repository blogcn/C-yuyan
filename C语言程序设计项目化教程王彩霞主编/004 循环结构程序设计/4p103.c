
/*���100~200֮�����������*/
# include <stdio.h>
void main()
{
int x,k,n=0;  //����N������¼�����ĸ���
for(k=2;k<=x/2&&x%k!=0;k++);
if (k>x/2){
printf("%-6d",x);
n++;
if(n%7==0){printf("\n");}
}
}
