#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,q,r,b,s=0;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        b=pow(r,m);
        s=s+b;
        m--;
        q=q/10;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}