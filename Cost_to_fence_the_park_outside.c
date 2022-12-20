#include<stdio.h>
int main()
{
    int l,b,w,g,a,c,d,e;
    scanf("%d%d%d%d",&l,&b,&w,&g);
    a=l*b;
    c=(l+2*w)*(b+2*w);
    d=c-a;
    e=d*g;
    printf("%d",e);
}