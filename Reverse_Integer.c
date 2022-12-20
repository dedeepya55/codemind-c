#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        m=m/10;
        s=s*10+n;
    }
    printf("%d",s);
}