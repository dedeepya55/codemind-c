#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r,q,i,s=0;
        scanf("%d",&n);
        q=n;
        while(q!=0)
        {
            r=q%10;
            q=q/10;
            s=s*10+r;
        }
        if(s==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}