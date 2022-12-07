#include<stdio.h>
int main()
{
    int a,b,i,lcm,gcd,p;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    
    p=a*b;
    lcm=p/gcd;
    
    printf("%d",lcm);
}