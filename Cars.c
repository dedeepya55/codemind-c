#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("%d",n/4);
    }
    else
    {
        a=n/4;
        printf("%d",a+1);
    }
}