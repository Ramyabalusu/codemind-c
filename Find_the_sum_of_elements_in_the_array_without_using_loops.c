#include<stdio.h>
int main()
{
int n,a[100],s=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
printf("%d",s);
return 0;
}