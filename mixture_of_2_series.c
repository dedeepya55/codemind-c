#include<stdio.h>
int main()
{
    int n,i,k1=0,k2=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",k1);
            k1++;
        }
        else
        {
            printf("%d ",2*k2);
            k2++;
        }
        
    }
}