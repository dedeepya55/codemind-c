#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d%d%d",&a,&b,&c);
    n=(b-a)/c;
    if((b-a)%c==0)
    {
    printf("%d",n);
    }
    else
    {
        printf("%d",(b-a-100)/c);
    }
}