#include<stdio.h>
int main()
{
    int n,k,m,h,a;
    scanf("%d%d%d",&n,&k,&m);
    h=m*k;
    if(n%h==0)
    {
        printf("%d",n/h);
    }
    else
    {
        a=n/h;
        printf("%d",a+1);
    }
}