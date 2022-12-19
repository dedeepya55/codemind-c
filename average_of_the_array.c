#include<stdio.h>
int main()
{
    int i,n;
    float s=0,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        s+=a[i];
    }
    b=s/n;
    printf("%.2f",b);
}