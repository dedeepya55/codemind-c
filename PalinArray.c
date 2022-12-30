#include<stdio.h>
int main()
{
    int n,i,r,s=0,p,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=a[i];
        while(p!=0)
        {
            r=p%10;
            s=s*10+r;
            p=p/10;
        }
        if(s==a[i])
        {
            c++;
        }
        s=0;
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}