#include<stdio.h>
int main()
{
    long long int m,n,lcm,gcd,i,p;
    scanf("%lld%lld",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        gcd=i;
    }
    p=m*n;
    lcm=p/gcd;
    printf("%d",lcm);
    
}