#include<stdio.h>
int main()
{
    int n,i,s=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        while(a[i]>s)
    {
     s=a[i];   
    }
        
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+x)>=s)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}