#include<stdio.h>
#include<math.h>
int main()
{
             int n,r,s=0,d,q;
             scanf("%d",&n);
             d=(int)log10(n)+1;
             q=n;
             while(q!=0)
             {
                   r=q%10;
                   s=s+(int)pow(r,d);
                   d--;
                   q/=10;
             }
             if(s==n)
                     printf("True");
             else
                     printf("False");
}