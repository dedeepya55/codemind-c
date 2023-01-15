#include<stdio.h>
int main()
{
    int n,i,h;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%h==0)
        {
            j++;
        }
        else
        {
            h=a[j]%h;
            i++;
        }
    }
    printf("%d",h);
}