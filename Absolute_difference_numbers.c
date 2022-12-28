#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,c,v,w,q,k;
    scanf("%d%d",&n,&m);
    a=log10(n)+1;
    b=a-m;
    q=pow(10,m);
    w=pow(10,b);
    v=n%q;
    c=n/w;
    k=v-c;
    k=abs(k);
    printf("%d",k);
}