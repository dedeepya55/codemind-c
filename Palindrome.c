#include<stdio.h>
int main()
{
    int n,m,q,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        m=q%10;
        q=q/10;
        s=s*10+m;
    }
    if (s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}