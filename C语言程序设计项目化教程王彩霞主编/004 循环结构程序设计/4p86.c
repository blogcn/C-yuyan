/*��FOR��估WHILE�����[1,1000]�������ۼӺ�,���۲����ַ������й����Ķ�Ӧ��ϵ��λ��*/
# include <stdio.h>
void main()
{
int sum,i;
sum=0;
i=1;
while (i<1000)
{
sum=sum+i;
i=i+2;
}
printf("sum=%d\n",sum);
}