#include<stdio.h>
int main()
{
    int n,r,large=1,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        r=n%10;
        if(r>large)
        {
        large=r;
        }
        n=n/10;
    }
    printf("%d",large);
}