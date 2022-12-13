#include<stdio.h>
int main()
{
    int i,n,min=1000;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}