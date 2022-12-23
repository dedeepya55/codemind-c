#include<stdio.h>
int main()
{
    int n,q,r,i,c=1,t=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        for(i=1;i<=r;i++)
        {
            c=c*i;
        }
        t=t+c;
        c=1;
        q=q/10;
    }
    if(t==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}