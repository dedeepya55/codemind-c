#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n,g;
        scanf("%d%d",&x,&n);
        g=(x/10)*n;
        printf("%d
",g);
    }
}