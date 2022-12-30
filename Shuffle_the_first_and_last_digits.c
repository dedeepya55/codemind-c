#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,a,b,c,h;
    scanf("%d",&n);
    m=log10(n)+1;
    k=pow(10,m-1);
    a=n%10;
    b=n/k;
    c=(n%k)-a;
    h=a*k+b+c;
    printf("%d",h);
}