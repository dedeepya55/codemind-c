#include<stdio.h>
int main()
{
    int n,m,j,r,s=0,k;
    scanf("%d",&n);
    m=n%1000;
    j=n/1000;
    while(m!=0)
    {
        r=m%10;
        s=s*10+r;
        m=m/10;
    }
    k=j*1000+s;
    printf("%d",k);
}