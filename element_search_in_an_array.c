#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n],j;
    for(i=0;i<n;i++)
    {
      scanf("%d%d",&a[i],&j);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("True");
            break;
        }
        else
        {
            c+=1;
        }
    }
    if(c==n)
    {
        printf("False");
    }
    
}