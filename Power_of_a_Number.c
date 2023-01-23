#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,p,m;
    scanf("%d%d%d",&n,&a,&b);
    p=pow(n,a);
    m=p%b;
    printf("%d",m);
}