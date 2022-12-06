#include<stdio.h>
int main()
{
    int m,n,a,s=0;
    scanf("%d",&m);
    a=m*m;
    while(a>0)
    {
        n=a%10;
        s=s+n;
        a=a/10;
    }
    if(s==m)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}