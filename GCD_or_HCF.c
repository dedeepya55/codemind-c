#include<stdio.h>
int main()
{
    int m,n,i,g;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        g=i;
    }
    printf("%d",g);
}