#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,k1=0,i,k2=0,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(5,k1);
            printf("%d ",a-3);
            k1++;
        }
        else
        {
            b=pow(3,k2);
            printf("%d ",b+2);
            k2++;
        }
    }
}