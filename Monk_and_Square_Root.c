#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,i,f=0;
        scanf("%lld%lld",&n,&m);
        for(i=0;i<m;i++)
        {
            if((i*i)%m==n)
            {
                printf("%d
",i);
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}