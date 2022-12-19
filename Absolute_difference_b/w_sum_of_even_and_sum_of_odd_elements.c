#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,dif;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];
        }
    }
    dif=sum-sum1;
    if(dif>0)
    {
    printf("%d",dif);
    }
    else
    {
        printf("%d",-dif);
    }
}