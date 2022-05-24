#include<stdio.h>
int main()
{
int n,F;
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0&i%2!=0)
{
F=1;
}
}
if(F==0)
{
printf("True");
}
else
{
printf("False");
}
}