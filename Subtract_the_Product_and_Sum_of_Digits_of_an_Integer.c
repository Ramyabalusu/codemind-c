#include<stdio.h>
int main()
{
int N,R,D,sum=0,prd=1;
scanf("%d",&N);
while(N>0)
{
R=N%10;
prd*=R;
sum+=R;
N=N/10;
}
D=prd-sum;
printf("%d",D);
return 0;
}