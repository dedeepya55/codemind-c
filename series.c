#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,k1=1,k2=0,h=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k1);
            printf("%d ",a-1);
            k1++;
        }
        else
        {
            b=pow(2,k2);
            h=h+b;
            printf("%d ",h);
            k2++;
        }
    }
}