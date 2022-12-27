#include<stdio.h>
int main()
{
    int m,p,c,r,s=0,o=0,k,e;
    scanf("%d",&m);
    p=m*m;
    c=m;
    while(c!=0)
    {
        r=c%10;
        s=s*10+r;
        c=c/10;
    }
    k=s*s;
    while(k!=0)
    {
        e=k%10;
        o=o*10+e;
        k=k/10;
    }
    if(o==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}